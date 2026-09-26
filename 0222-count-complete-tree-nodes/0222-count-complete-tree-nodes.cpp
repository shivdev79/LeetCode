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
    int countNodes(TreeNode* root) {
        vector <int> store;
        preorder(root , store);
        int x = store.size();
        return x;
    }
    void preorder(TreeNode* root , vector <int> &store){
        if(root == NULL){
            return ;
        }
        store.push_back(root -> val);
        preorder(root -> left, store);
        preorder(root -> right , store);
    }
};