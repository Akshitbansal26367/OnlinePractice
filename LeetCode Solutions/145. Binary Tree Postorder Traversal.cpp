class Solution {
public:
    /*void solve(TreeNode* root, vector<int>&arr) {
        if(root == NULL) return;
        solve(root->left,arr);
        solve(root->right,arr);
        arr.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        solve(root,ans);
        return ans;
    }*/

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postOrder;
        if (root == NULL)
            return postOrder;

        stack<TreeNode*> s1, s2;
        s1.push(root);

        while (!s1.empty()) {
            TreeNode* node = s1.top();
            s1.pop();
            s2.push(node);

            if (node->left != NULL)
                s1.push(node->left);
            if (node->right != NULL)
                s1.push(node->right);
        }

        while (!s2.empty()) {
            TreeNode* node = s2.top();
            s2.pop();
            postOrder.push_back(node->val);
        }
        return postOrder;
    }
};
