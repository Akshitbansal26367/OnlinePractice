class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int rem, sum = 0;
        int temp = x;

        while (x > 0) {
            rem = x % 10;
            sum += rem;
            x /= 10;
        }

        if (temp % sum == 0)
            return sum;

        else
            return -1;
    }
};
