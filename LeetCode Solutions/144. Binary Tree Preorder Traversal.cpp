class Solution {
public:
    /*void solve(TreeNode* root, vector<int>& arr) {
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
    }*/

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preOrder;
        if (root == NULL)
            return preOrder;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            preOrder.push_back(node->val);

            if (node->right != NULL)
                st.push(node->right);
            if (node->left != NULL)
                st.push(node->left);
        }
        return preOrder;
    }
};
