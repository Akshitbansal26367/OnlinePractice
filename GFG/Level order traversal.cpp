class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>>answer;
        if(root == NULL) 
            return answer;
            
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()) {
            int size = q.size();
            vector<int>level;
            
            for(int i = 0; i < size; i++) {
                Node* node = q.front();
                q.pop();
                level.push_back(node->data);
                
                if(node->left != NULL)
                    q.push(node->left);
                if(node->right != NULL)
                    q.push(node->right);
            }
            answer.push_back(level);
        }
        return answer;
    }
};
