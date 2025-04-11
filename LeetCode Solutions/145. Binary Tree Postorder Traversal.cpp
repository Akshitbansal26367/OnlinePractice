class Solution {
public:
    void solve(TreeNode* root, vector<int>&arr) {
        if(root == NULL) return;
        solve(root->left,arr);
        solve(root->right,arr);
        arr.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        solve(root,ans);
        return ans;
    }
};
