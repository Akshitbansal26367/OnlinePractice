class Solution {
  public:
    int evenlyDivides(int n) {
        vector <int> answer;
        int count = 0;
        int temp = n;
        
        while (n != 0) {
            answer.push_back(n % 10);
            n = n / 10;
        }
        
        for (int i = 0; i < answer.size(); i++) {
            if (answer[i] != 0 && temp % answer[i] == 0)
                count++;
        }
        return count;
    }
};
