/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #include<math.h>
int getDecimalValue(struct ListNode* head) {
    int count=0;
    struct ListNode* temp=head;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    int sum = 0;
    while(head != NULL){
        sum = sum + (head->val)*pow(2,count-1);
        head=head->next;
        count--;
    }
    return sum;
}