/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    int count=0;
    struct ListNode* temp = head;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }

    int a[count];
    struct ListNode* temp1 = head;
    for(int i=0; i<count; i++){
        a[i]=temp1->val;
        temp1=temp1->next;
    }

    int b[count];
    int j=0;
    int k=0;
    while(j < count){
        if(a[j] < x){
            b[k] = a[j];
            k++;
        }
        j++;
    }
    int l=0;
    while(l < count){
        if(a[l] >= x){
            b[k] = a[l];
            k++;
        }
        l++;
    }

    int y=0;
    struct ListNode* temp2 = head;
    while(y < count){
        temp2->val=b[y];
        y++;
        temp2=temp2->next;
    }
    return head;
}