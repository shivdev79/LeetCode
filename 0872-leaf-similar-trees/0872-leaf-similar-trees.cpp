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
void collect(TreeNode* root , vector <int> &store){
    if(root == NULL){
        return ;
    }
    if(root -> left == NULL && root -> right == NULL){
        store.push_back(root -> val);
    }
    collect(root -> left, store);
    collect(root -> right ,store);

}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> leaves1, leaves2;
        collect(root1,leaves1);
        collect(root2, leaves2);
        return leaves1==leaves2;
    }
};