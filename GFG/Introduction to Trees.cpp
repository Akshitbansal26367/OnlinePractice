class Solution {
  public:
    int countNodes(int i) {
        if(i == 1 || i == 2)
            return i;
        else
            return pow(2, i-1);
    }
};
