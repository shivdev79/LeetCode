class Solution {
public:
    void preorder(TreeNode* root, vector<int>& store) {
        if(root == NULL){
            return;
        }
        store.push_back(root->val);          
        preorder(root->left, store);        
        preorder(root->right, store);       
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> store;
        preorder(root, store);
        return store;
    }
};
