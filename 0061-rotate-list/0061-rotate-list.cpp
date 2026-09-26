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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* tail = head;
        int len = 1;
        while(tail -> next != NULL){
            len = len + 1;
            tail = tail -> next;
        }
        k = k % len;
        if( k == 0 ){
            return head;
        }
        tail -> next = head;
        int r = len - k;
        ListNode* temp = head;
        while(temp != NULL){
            r = r - 1;
            if( r == 0){
                break;
            }
            temp = temp -> next;
        }
        head = temp -> next;
        temp -> next = NULL;
        return head;
    }
};