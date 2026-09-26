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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;
        while (temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> final;
        
        map<int, int> mpp;
        for (auto it : nums) {
            mpp[it] = 1;
        }
        for (auto it : ans) {
            if (mpp[it] == 0) {
                final.push_back(it);
            }
        }

        
       
        ListNode* n1 = new ListNode(final[0]);
        ListNode* move = n1;
        for (int i = 1; i < final.size(); i++) {
            ListNode* n1 = new ListNode(final[i]);
            move->next = n1;
            move = move->next;
        }
        return n1;
    }
};