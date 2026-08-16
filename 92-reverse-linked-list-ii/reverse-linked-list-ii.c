/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        return head;
    }
    struct ListNode* temp=head;
    int count=0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    int a[count];
    struct ListNode* temp1 = head;
    for(int i=0;i<count;i++){
        a[i]=temp1->val;
        temp1 = temp1->next;
    }
    int temp2;
    while(left <= right){
        temp2=a[left-1];
        a[left-1]=a[right-1];
        a[right-1]=temp2;
        left++;
        right--;
    }
    int j=0;
    struct ListNode* result=head;
    while(j < count){
        result->val=a[j];
        result=result->next;
        j++;
    }
    return head;
}