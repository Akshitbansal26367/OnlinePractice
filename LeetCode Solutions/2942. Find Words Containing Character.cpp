class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int words_size = words.size();
        vector<int> index;

        for (int i = 0; i < words_size; i++) {
            if (words[i].find(x) != string::npos)
                index.push_back(i);
        }
        return index;
    }
};
