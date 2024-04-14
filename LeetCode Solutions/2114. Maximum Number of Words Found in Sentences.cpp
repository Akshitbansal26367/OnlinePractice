class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;
        int wordCount = 0;

        for (int i = 0; i < sentences.size(); i++) {
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ')
                    wordCount++;
            }

            if (wordCount > maxCount)
                maxCount = wordCount;

            wordCount = 0;
        }
        return maxCount + 1;
    }
};
