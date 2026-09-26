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
    int maxLevelSum(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int maxsum = INT_MIN;
        int level = 0;
        int anslevel = 0;
        while( !q.empty()){
            int size = q.size();
            int sum = 0;
            for(int i = 0 ; i < size ; i++){
                TreeNode* temp = q.front();
                q.pop();
                sum = sum + temp -> val;
                if(temp -> left != NULL){
                    q.push(temp -> left);
                }
                if(temp -> right != NULL){
                    q.push(temp -> right);
                }
            }
            level++;
            if (sum > maxsum) {
                maxsum = sum;
                anslevel = level;
            }
        }
        return anslevel;
        
    }
};