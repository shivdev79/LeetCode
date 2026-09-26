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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        int len = 1;
        ListNode* temp = head;
        while(temp -> next != NULL){
            len++;
            temp = temp -> next;
        }
        int r = len/2 + 1;
        ListNode* temp1 = head;
        ListNode* prev =NULL;
        while(temp1 != NULL){
            r = r - 1;
            if(r == 0){
                break;
            }
            prev = temp1;
            temp1 = temp1 -> next;

        }
        prev -> next = temp1 -> next;
        delete(temp1);

        return head;
    }
};