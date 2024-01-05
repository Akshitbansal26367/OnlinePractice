class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int temp = money;
        sort(prices.begin(), prices.end());

        for(int i = 0; i < prices.size() ; i++) {
            for(int j = i + 1; j < prices.size(); j++) {
                if (prices[i] + prices[j] <= money)
                    return money - prices[i] - prices[j];
            }
        }
        return temp;
    }
};
