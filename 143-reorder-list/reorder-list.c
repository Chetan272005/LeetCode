/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int check(struct ListNode* head){
    struct ListNode* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void reorderList(struct ListNode* head) {
    if(head == NULL || head->next == NULL){
        return;
    }
    int n = check(head);

    struct ListNode* temp1 = head;
    int a[n];
    for(int i=0; i<n; i++){
        a[i]=temp1->val;
        temp1=temp1->next;
    }

    int b[n];
    int j = 0;
    int k=0;
    if(n % 2 == 0){
            while(j < n/2 && k < n){
            b[k] = a[j];
            b[k+1] = a[n-j-1];
            k=k+2;
            j++;
        }
    }
    else if(n % 2 == 1){
            while(j < n/2){
            b[k] = a[j];
            b[k+1] = a[n-j-1];
            k=k+2;
            j++;
        }
        b[n-1] = a[j];
    }

    struct ListNode* temp2 = head;
    int x=0;
    while(x < n){
        temp2->val=b[x];
        temp2=temp2->next;
        x++;
    }
    return;
}