/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int check(struct ListNode* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}
bool isPalindrome(struct ListNode* head) {
    int n = check(head);
    int a[n];

    struct ListNode* temp = head;
    int i = 0;
    while(i < n){
        a[i] = temp->val;
        temp = temp->next;
        i++;
    }
    int j = 0;
    int k = n-1;
    int p = 0;
    while(j <= k){
        if(a[j] == a[k]){
            j++;
            k--;
            p++;
        }
        else{
            return false;
        }
    }
    if(p >= (n/2)){
        return true;
    }
    return false;
}