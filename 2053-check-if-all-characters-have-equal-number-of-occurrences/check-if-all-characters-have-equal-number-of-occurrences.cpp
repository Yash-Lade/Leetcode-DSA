class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mpp;

        for(auto str: s)
        mpp[str]++;
        
        int freq = mpp.begin()->second;
        bool ans = false;
        
        for(auto f : mpp){
            if(f.second != freq) return false;
        }
        return true;
    }
};