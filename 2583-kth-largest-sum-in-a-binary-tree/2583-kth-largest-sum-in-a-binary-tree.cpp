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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector <long long> add;
        if(root == NULL){
            return  -1;
        }
        queue < TreeNode *> q;
        q.push(root);
        while( !q.empty()){
            long long  sum = 0 ;
            int size = q.size();
            for(int i = 0; i < size ; i++)
            {
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
            add.push_back(sum);
           

        }
        if (k > add.size()) return -1;

        sort(add.begin() , add.end() , greater<long long>());
        return add[k-1];
    }
};