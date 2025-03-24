class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        /*while (stones.size() > 1) {
            sort(stones.begin(), stones.end());

            int y = stones.back();
            stones.pop_back();

            int x = stones.back();
            stones.pop_back();

            if (y != x)
                stones.push_back(y - x);
        }
        return stones.empty() ? 0 : stones[0];*/
        priority_queue<int> pq;
        for (int element : stones)
            pq.push(element);

        while (pq.size() > 1) {
            int y = pq.top();
            pq.pop();

            int x = pq.top();
            pq.pop();

            if (y != x)
                pq.push(y - x);
        }
        return pq.empty() ? 0 : pq.top();
    }
};
