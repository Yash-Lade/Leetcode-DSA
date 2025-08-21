class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> hash;
        for(int i=0;i<sentence.size();i++)
        hash[sentence[i]]++;

        return hash.size()==26;
    }
};