class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer;
        int size = candies.size();
        bool flag;

        for (int i = 0; i < size; i++) {
            flag = true;
            for (int j = 0; j < size; j++) {
                if ((i != j) && (candies[i] + extraCandies < candies[j]))
                    flag = false;
            }
            answer.push_back(flag);
        }
        return answer;
    }
};
