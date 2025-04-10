class Solution {
public:
    void solve(TreeNode* root, vector<int>& arr) {
        if (root == NULL)
            return;
        arr.push_back(root->val);
        solve(root->left, arr);
        solve(root->right, arr);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        solve(root, arr);
        return arr;
    }
};
