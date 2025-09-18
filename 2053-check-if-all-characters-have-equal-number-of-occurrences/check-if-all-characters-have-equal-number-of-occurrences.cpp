class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        unordered_map<char, int> mpp;

        for(auto str: s) mpp[str]++;
        
        unordered_set<int> st;

        for(auto freq: mpp) st.insert(freq.second);

        if(st.size() == 1) return true;

        return false;
    }
};