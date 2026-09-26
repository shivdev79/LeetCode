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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector <int> ans;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while(temp1 != NULL){
            ans.push_back(temp1 -> val);
            temp1 = temp1 -> next;
        }
        while(temp2 != NULL){
            ans.push_back(temp2 -> val);
            temp2 = temp2 -> next;
        }
        sort(ans.begin(),ans.end());
        int z = ans.size();
        if(z==0){
            return NULL;
        }
        ListNode* head1 = new ListNode(ans[0]);
        ListNode* current = head1;
        for(int i = 1 ; i < z; i++){
            current -> next = new ListNode(ans[i]);
            current = current -> next;
        }
        return head1;
    }
};