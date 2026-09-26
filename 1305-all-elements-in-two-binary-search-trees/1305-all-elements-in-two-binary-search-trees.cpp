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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> ans1;
        vector <int> ans2;
        vector <int> final1;
        inorder(root1, ans1);
        inorder(root2 , ans2);
        for(int i = 0 ; i < ans1.size();i++){
             final1.push_back(ans1[i]);
        }
        for(int i = 0 ; i < ans2.size() ;i++){
             final1.push_back(ans2[i]);
        }
        sort(final1.begin() , final1.end());
        return final1;
    }
    void inorder(TreeNode* root , vector <int> &ans){
        if(root == NULL){
            return ;
        }
        inorder(root -> left , ans);
        ans.push_back(root -> val);
        inorder(root -> right , ans);
    }
};