class Solution {
public:
    bool isPalindrome(int x) {
        /*long long int rev = 0;
        int temp = x;
        while (x > 0) {
            int last = x % 10;
            rev = rev * 10 + last;
            x = x / 10;
        }

        if (rev == temp)
            return true;
        else
            return false;*/
        string str = to_string(x);

        for (int i = 0; i < str.size() / 2; i++) {
            if (str[i] != str[str.size() - i - 1])
                return false;
        }
        return true;
    }
};
