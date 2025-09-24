class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";

        // sort the array to make the group of diff sequences
        sort(strs.begin(), strs.end());

        // now find first and last string
        int sz = strs.size();
        vector<char> first(strs[0].begin(), strs[0].end());
        vector<char> last(strs[sz - 1].begin(), strs[sz - 1].end());

        for(int i = 0; i<first.size(); i++){
            if(first[i] != last[i])
            break;
            ans = ans + first[i];
        }

        return ans;
    }
};