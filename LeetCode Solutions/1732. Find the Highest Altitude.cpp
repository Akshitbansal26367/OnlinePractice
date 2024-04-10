class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> answer;
        int max = 0, sum = 0;
        int i;
        answer.push_back(0);

        for (i = 0; i < gain.size(); i++) {
            sum += gain[i];
            answer.push_back(sum);
        }

        for (i = 0; i < answer.size(); i++) {
            if (answer[i] > max)
                max = answer[i];
        }
        return max;
    }
};
