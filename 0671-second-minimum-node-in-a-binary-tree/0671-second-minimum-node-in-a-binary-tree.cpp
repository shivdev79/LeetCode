/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void collect(TreeNode* root  , set <int>& s){
    if(root == NULL){
        return ;
    }
    s.insert(root -> val);
    collect(root -> left , s);
    collect(root -> right , s);
}
    int findSecondMinimumValue(TreeNode* root) {
        if(root == NULL){
            return -1;
        }
        set <int> s;
        collect(root , s);
        if(s.size() < 2) return -1;
        auto it = s.begin();
        it++;
        return *it;
    }
};