class Solution {
public:
    int minimumFlips(int n) {
        string s = bitset<32>(n).to_string();
        s = s.substr(s.find('1'));   // trim leading zeros
    
        string rev = s;
        reverse(rev.begin(), rev.end());
    
        int flips = 0;
        for(int i = 0; i < s.size(); i++) {
            if (s[i] != rev[i]) flips++;
        }
        return flips;
    }
};©leetcode
