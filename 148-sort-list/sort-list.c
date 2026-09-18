int count(struct ListNode* head){
    int val = 0;

    while(head != NULL){
        val++;
        head = head->next;
    }

    return val;
}
void merge(int arr[],int low,int mid,int high){

    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[high - low + 1];

    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        }
        else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= mid){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= high){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i = low, k = 0; i <= high; i++, k++){
        arr[i] = temp[k];
    }
}
void merge_sort(int arr[], int low, int high){
    if(low < high){
        int mid = low +(high - low)/2;

        merge_sort(arr,low,mid);

        merge_sort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
}
struct ListNode* sortList(struct ListNode* head) {

    if(head == NULL || head->next == NULL){
        return head;
    }
    int n = count(head);
    int a[n];
    int i = 0;
    struct ListNode* temp = head;
    while(i < n){
        a[i] = temp->val;
        temp = temp->next;
        i++;
    }

    merge_sort(a,0,n-1);

    struct ListNode* temp1 = head;

    i = 0;
    while(i < n){
        temp1->val = a[i];
        temp1 = temp1->next;
        i++;
    }

    return head;
}