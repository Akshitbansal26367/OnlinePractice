class Solution {
public:
    int countDigits(int num) {
        int temp = num;
        int count = 0, last;

        while (num > 0) {
            last = num % 10;
            num = num / 10;

            if (temp % last == 0)
                count++;
        }
        return count;
    }
};
