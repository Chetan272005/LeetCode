/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    struct ListNode* temp = head;
    struct ListNode* temp1 = head;
    temp1->val=temp->val;
    while(temp != NULL){
        if(temp->val == temp1->val){
            temp=temp->next;
        }
        else if(temp->val != temp1->val){
            temp1=temp1->next;
            temp1->val=temp->val;
            temp=temp->next;
        }
    }
    temp1->next = NULL;
    return head;
}