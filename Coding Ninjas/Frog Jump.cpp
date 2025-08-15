#include <bits/stdc++.h> 
using namespace std;

int solve(int n, vector<int> &heights) {
    if(n == 1)
        return 0;
    
    int prev = 0, prev2 = 0;

    for(int i = 1; i < n; i++) {
        int left = prev + abs(heights[i] - heights[i-1]);
        int right = INT_MAX;

        if(i > 1)
            right = prev2 + abs(heights[i] - heights[i-2]);
        
        int current = min(left, right);
        prev2 = prev;
        prev = current;
    }
    return prev;
}

int frogJump(int n, vector<int> &heights) {
    return solve(n, heights);
}
