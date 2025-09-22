class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string wrd1 = "";
        string wrd2 = "";

        for(auto ch: word1)
        wrd1 += ch;

        for(auto ch: word2)
        wrd2 += ch;

        return wrd1 == wrd2;
    }
};