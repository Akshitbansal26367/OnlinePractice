class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1)
            return 1;
        vector<int> answer(n + 1, 0);
        answer[0] = 1;
        answer[1] = 1;
        for (int i = 2; i <= n; i++)
            answer[i] = answer[i - 1] + answer[i - 2];
        return answer[n];
    }
};
