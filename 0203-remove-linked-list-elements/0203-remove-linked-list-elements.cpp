class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return nullptr;

        // Count total nodes
        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            cnt++;
        }

        // Find positions of nodes to delete
        temp = head;
        vector<int> positions;
        int rnt = 0;
        while (temp != NULL) {
            if (temp->val == val) {
                positions.push_back(rnt);
            }
            temp = temp->next;
            rnt++;
        }

        // Delete nodes from end to start to avoid index shifting
        reverse(positions.begin(), positions.end());

        for (int i = 0; i < positions.size(); i++) {
            int target = positions[i];
            if (target == 0) {
                ListNode* temp = head;
                head = head->next;
                temp->next = NULL;
                delete temp;
                continue;
            }
            ListNode* prev = NULL;
            ListNode* curr = head;
            int idx = 0;
            while (idx < target) {
                prev = curr;
                curr = curr->next;
                idx++;
            }
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }

        return head;
    }
};
