class Solution {
public:
    bool isPalindrome(string s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

    void solve(int idx, string& s, vector<string>& ds, vector<vector<string>>& answer) {
        if (idx == s.size()) {
            answer.push_back(ds);
            return;
        }

        for (int i = idx; i < s.size(); i++) {
            if (isPalindrome(s, idx, i)) {
                ds.push_back(s.substr(idx, i - idx + 1));
                solve(i + 1, s, ds, answer);
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> answer;
        vector<string> ds;
        solve(0, s, ds, answer);
        return answer;
    }
};
