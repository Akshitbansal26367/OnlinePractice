class Solution {
  public:
    vector<int>di = {+1, 0, 0, -1};
    vector<int>dj = {0, -1, +1, 0};
    
    void solve(int i, int j, vector<vector<int>>&maze, vector<string>&ans, 
    string move, vector<vector<int>>&vis) {
        int n = maze.size();
        vector<string>dir = {"D", "L", "R", "U"};
        if(i == n - 1 && j == n - 1) {
            ans.push_back(move);
            return;
        }
        
        for(int ind = 0; ind < 4; ind++) {
            int new_i = i + di[ind];
            int new_j = j + dj[ind];
            if(new_i >= 0 && new_j >= 0 && new_i < n && new_j < n && 
            vis[new_i][new_j] == 0 && maze[new_i][new_j] == 1) {
                vis[i][j] = 1;
                solve(new_i, new_j, maze, ans, move + dir[ind], vis);
                vis[i][j] = 0;
            }
        }
    }
    
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        vector<string>ans;
        vector<vector<int>>vis(n, vector<int>(n, 0));
        if(maze[0][0] == 1 && maze[n-1][n-1] == 1)
        solve(0, 0, maze, ans, "", vis);
        return ans;
    }
};
