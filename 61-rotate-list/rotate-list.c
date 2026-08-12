/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    int count=0;
    struct ListNode* temp = head;
    struct ListNode* Temp = head;
    struct ListNode* TEMP = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    if(count == 0){
        return head;
    }
    if(count == 1){
        return head;
    }
    int a[count];
    for(int i=0; i<count; i++){
        a[i]=Temp->val;
        Temp=Temp->next;
    }

    int rotate=0;
    while(k >= count){
        k=k%count; 
    }
    while(rotate < k){
        int num=a[count-1];
        for(int i=count-1; i>0 ; i--){
            a[i]=a[i-1];
        }
        a[0]=num;
        rotate++;
    }
    int b=0;
    while(TEMP != NULL && b < count){
        TEMP->val = a[b];
        TEMP = TEMP->next;
        b++;
    }
    return head;
}