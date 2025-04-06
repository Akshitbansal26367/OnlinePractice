class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> answer(n, 1);
        
        for(int i = 1; i < n - 1; i++) {
            for(int j = i; j > 0; j--)
                answer[j] += answer[j - 1];
        }
        return answer;
    }
};
