class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int currentWealth = 0; // Initialize current wealth for each person
            for (int j = 0; j < accounts[i].size(); j++)
                currentWealth += accounts[i][j]; // Add up all accounts for this person
            maxWealth =
                max(maxWealth, currentWealth); // Update maxWealth if necessary
        }
        return maxWealth;
    }
};
