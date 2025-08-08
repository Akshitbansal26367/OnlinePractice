class Solution {
public:
    unordered_set<string> st;
    vector<int> dp;

    bool solve(int idx, string& s) {
        if (idx == s.size())
            return true;

        if (dp[idx] != -1)
            return dp[idx];

        for (int i = 1; i <= s.size() - idx; i++) {
            string sub_str = s.substr(idx, i);
            if (st.find(sub_str) != st.end() && solve(idx + i, s))
                return dp[idx] = 1;
        }
        return dp[idx] = 0;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        for (auto& word : wordDict)
            st.insert(word);

        dp.assign(s.size(), -1);
        return solve(0, s);
    }
};
