class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int rem;
        vector<int> digits;
        vector<int> answer;

        while (n > 0) {
            rem = n % 10;
            digits.push_back(rem);
            n = n / 10;
        }

        for (int i = digits.size() - 1; i >= 0; i--)
            answer.push_back(digits[i]);

        for (int i = 0; i < answer.size(); i++) {
            if (i % 2 == 0)
                sum = sum + answer[i];

            else
                sum = sum - answer[i];
        }
        return sum;
    }
};
