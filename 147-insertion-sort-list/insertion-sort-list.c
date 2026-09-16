/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 void insertionSort(int arr[], int n) {

    for(int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
int count(struct ListNode* head){
    int val = 0;
    while(head != NULL){
        val++;
        head = head->next;
    }
    return val;
}
struct ListNode* insertionSortList(struct ListNode* head) {
    int n = count(head);

    int arr[n];

    int i = 0;
    struct ListNode* temp = head;
    while(i < n){
        arr[i] = temp->val;
        temp = temp->next;
        i++;
    }

    insertionSort(arr,n);


    int j = 0;
    struct ListNode* head1 = head;
    while(j < n){
        head1->val = arr[j];
        head1 = head1->next;
        j++;
    }

    return head;
}