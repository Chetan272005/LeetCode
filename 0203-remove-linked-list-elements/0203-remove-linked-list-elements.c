/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int check(struct ListNode* head,int value){
    int count = 0;
    while(head != NULL){
        if(head->val != value){
            count++;
        }
        head = head->next;
    }
    return count;
} 
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head == NULL){
        return NULL;
    }
    struct ListNode* temp = head;
    int i = 0;
    int n = check(head,val);
    if(n == 0){
        return NULL;
    }
    int a[n];
    while(temp != NULL){
        if(temp->val != val){
            a[i]=temp->val;
            i++;
        }
        temp=temp->next;
    }

    struct ListNode* temp1 = head;
    int j=0;
    while(j < n){
        temp1->val = a[j];
        if(j == n-1){
            temp1->next = NULL;
            return head;
        }
        temp1 = temp1->next;
        j++;
    }
    return head;
}