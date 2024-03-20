class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        int i, j;

        for (i = 0; i <= m - n; i++) {
            for (j = 0; j < n; j++) {

                if (haystack[i + j] != needle[j])
                    break;

                if (j == n - 1)
                    return i;
            }
        }

        return -1;
    }
};
