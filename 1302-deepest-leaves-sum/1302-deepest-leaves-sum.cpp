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
int sum ;
int maxdepth;
void dfs(TreeNode* root , int depth){
    if(root == NULL){
        return;
    }
    if(root -> left == NULL && root -> right == NULL){
        if(depth > maxdepth){
            maxdepth = depth;
            sum = root -> val;
        }
        else if(depth == maxdepth){
            sum = sum + root -> val;
        }
    }
    dfs(root -> left, depth + 1);
    dfs(root -> right , depth + 1);
}
    int deepestLeavesSum(TreeNode* root) {
        sum =0;
        maxdepth = -1;
        dfs(root  , 0);
        return sum;
    }
};