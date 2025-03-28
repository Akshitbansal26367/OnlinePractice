class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> m(1001, 0);

        for (int i = 0; i < trips.size(); i++) {
            vector<int> v = trips[i];
            int start = v[1];
            int end = v[2];
            m[start] += v[0];
            m[end] -= v[0];
        }

        int sum = capacity;
        for (int i = 0; i < 1001 && sum >= 0; i++)
            sum -= m[i];

        return sum >= 0;
    }
};
