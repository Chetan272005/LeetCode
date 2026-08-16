/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp=head;
    struct ListNode* temp1=head;
    int count=0;
    if(head == NULL){
        return NULL;
    }
    while(temp != NULL){
        temp=temp->next;
        count++;
    }
    int a[count];
    int i=0;
    while(temp1 != NULL){
        a[i] = temp1->val;
        i++;
        temp1=temp1->next;
    }
    int j=0;
    struct ListNode* result = head;
    while(j < count){
        result->val = a[count-j-1];
        result=result->next;
        j++;
    }
    return head;
}