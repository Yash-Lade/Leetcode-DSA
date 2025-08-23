class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> mpp;

        for(auto itr: s){
            mpp[itr]++;

            if(mpp[itr]==2) return itr;
        }
        return ' ';
    }
};