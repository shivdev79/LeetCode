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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector <int> ans;
        while(temp != NULL){
            ans.push_back(temp -> val);
            temp = temp -> next;
        }
        sort(ans.begin(), ans.end());
        int z = ans.size();
        if(ans.size()==0){
            return NULL;
        }
        ListNode* head1 = new ListNode(ans[0]);
        ListNode* current = head1;
        for(int i = 1 ; i < z ; i++ ){
            current -> next = new ListNode(ans[i]);
            current = current -> next;
        }
        return head1;
    }
};