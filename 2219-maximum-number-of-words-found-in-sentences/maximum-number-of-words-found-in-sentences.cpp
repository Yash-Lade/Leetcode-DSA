class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxWords = 0;

        for(auto sentence: sentences){
            int words = 1;
            for(auto word : sentence){
                if(word == ' ') words++;
            }
            maxWords = max(words, maxWords);
        }
        return maxWords;
    }
};