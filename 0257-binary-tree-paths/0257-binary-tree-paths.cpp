class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> store;
        string path = "";
        solve(root, store, path);
        return store;
    }

    void solve(TreeNode* root, vector<string>& store, string path) {
        if (root == NULL) return;

        // YOUR push step (fixed)
        if (path.empty())
            path = to_string(root->val);
        else
            path += "->" + to_string(root->val);

        // YOUR leaf condition
        if (root->left == NULL && root->right == NULL) {
            store.push_back(path);
            return;
        }

        // YOUR recursion
        solve(root->left, store, path);
        solve(root->right, store, path);
    }
};
