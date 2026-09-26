/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp = headA;
        map < ListNode * , bool > visited;
        while(temp != NULL){
            visited[temp] = true;
            temp = temp -> next;
        }
        temp = headB;
        while(temp != NULL){
            if(visited.find(temp) != visited.end()){
                return temp;
            }
            temp = temp -> next;
        }
        return NULL;
    }
};