class Solution {
public:
    int countEven(int num) {
        int count = 0;
        int i = num;

        while (i >= 2) {
            int val = i;
            int sum = 0;
            while (val > 0) {
                int last = val % 10;
                val = val / 10;
                sum += last;
            }
            if (sum % 2 == 0)
                count++;
            i--;
        }
        return count;
    }
};
