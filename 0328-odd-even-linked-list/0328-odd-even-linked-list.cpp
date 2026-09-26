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
    ListNode* oddEvenList(ListNode* head) {

        vector<int> evens;
        vector<int> odds;
        ListNode* temp = head;
        if (!head) return nullptr; 
        bool isOdd = true;

        while (temp != NULL) {
            if (isOdd)
                odds.push_back(temp->val);
            else
                evens.push_back(temp->val);

            temp = temp->next;
            isOdd = !isOdd;
        }
        odds.insert(odds.end(), evens.begin(), evens.end());
        ListNode* head1 = new ListNode(odds[0]);
        ListNode* current = head1;
        for (int i = 1; i < odds.size(); i++) {
            current->next = new ListNode(odds[i]);
            current = current->next;
        }
        return head1;
    }
};