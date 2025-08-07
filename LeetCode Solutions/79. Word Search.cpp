class Solution {
public:
    int rows, cols;
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    bool dfs(int i, int j, int idx, vector<vector<char>>& board, string& word,
    vector<vector<int>>& visited) {
        if (idx == word.size())
            return true;

        if (i < 0 || i >= rows || j < 0 || j >= cols ||
            board[i][j] != word[idx] || visited[i][j] == 1)
            return false;

        visited[i][j] = 1;

        for (auto& dir : directions) {
            int new_i = i + dir[0];
            int new_j = j + dir[1];

            if (dfs(new_i, new_j, idx + 1, board, word, visited))
                return true;
        }

        visited[i][j] = 0;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size();
        cols = board[0].size();

        vector<vector<int>> visited(rows, vector<int>(cols, 0));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] == word[0] &&
                    dfs(i, j, 0, board, word, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
};
