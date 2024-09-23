class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (st.empty())
                    return false;
                if ((s[i] == ')' && st.top() != '(') ||
                    (s[i] == '}' && st.top() != '{') ||
                    (s[i] == ']' && st.top() != '['))
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
