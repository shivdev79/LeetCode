/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return NULL;
        }
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp -> next;
        }
        if(cnt == n){
            ListNode* temp1 = head;
            head = head -> next;
            delete(temp1);
            return head;
        }
        int res = cnt - n;
        ListNode* temp1 = head;
        while( temp1 != NULL){
            res--;
            if(res == 0){
                break;
            }
            temp1 = temp1 -> next;
        }
        ListNode* deletenode = temp1 -> next;
        temp1 -> next = deletenode -> next;
        delete(deletenode);
        return head;

    }
};