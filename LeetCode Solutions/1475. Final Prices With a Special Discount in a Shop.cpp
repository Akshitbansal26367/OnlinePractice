class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        int n = prices.size();

        for (int i = 0; i < n - 1; i++) {
            int value = prices[i];
            for (int j = i + 1; j < n; j++) {
                if (prices[j] <= value) {
                    answer.push_back(prices[i] - prices[j]);
                    break;
                } else if (j == n - 1)
                    answer.push_back(prices[i]);
            }
        }
        answer.push_back(prices[n - 1]);
        return answer;
    }
};
