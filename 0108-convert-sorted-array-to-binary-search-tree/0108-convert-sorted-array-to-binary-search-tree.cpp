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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        vector <int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            ans.push_back(nums[i]);
        }
        return createbst(ans , 0 , nums.size() - 1);
    }
    TreeNode* createbst(vector <int> &ans , int start , int end){
        if(start > end){
            return NULL;
        }
        int mid = (start + end + 1)/2;
        TreeNode* root = new TreeNode(ans[mid]);
        root -> left = createbst(ans , start , mid - 1);
        root -> right = createbst(ans , mid + 1 , end);
        return root;
    }
};