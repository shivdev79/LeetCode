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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp1 = head;
        vector <int> ans;
        while(temp1 != NULL){
            ans.push_back(temp1 -> val);
            temp1 = temp1 -> next;
        }
        int z = ans.size();
        unordered_map<int,int> freq;
        vector <int> store;
        for(int i = 0 ; i < z ; i++){
            freq[ans[i]]++;
        }
        for(auto it : freq) {
            if(it.second == 1){
                store.push_back(it.first);
            }
        }
        sort(store.begin(),store.end());
        int s = store.size();
        if(s == 0){
            return nullptr;
        }
        ListNode* head1 = new ListNode(store[0]);
        ListNode* current = head1;
        for(int i = 1 ; i < store.size() ; i++){
            current -> next = new ListNode(store[i]);
            current = current -> next;
        }
        return head1;
    }
};