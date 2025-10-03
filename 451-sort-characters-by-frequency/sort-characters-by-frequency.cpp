class Solution {
public:
    string frequencySort(string s) {
        
        vector<int> freq(128, 0); // 128 is random no. taken
        
        for(auto c: s)  freq[c]++;

        // comparator function 
        auto cmp = [&](char a, char b){
            if(freq[a] == freq[b]) return a < b;
            return freq[a] > freq[b];
        };

        sort(s.begin(), s.end(), cmp);
        return s;

    }
};