class Solution {
public:
    string intToRoman(int num) {
        vector<int> val = {1000, 900, 500, 400, 100, 90, 50,
        40,   10,  9,   5,   4,   1};

        vector<string> sym = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
        "XL", "X",  "IX", "V",  "IV", "I"};

        int i = 0;
        string str = "";

        while (num > 0) {
            if (num >= val[i]) {
                str = str + sym[i];
                num = num - val[i];
            } else i++;
        }
        return str;
    }
};
