class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> mpp;

        for(auto num: nums)
        mpp[num]++;

        for(auto mp: mpp){
            if(mp.second == 1) return mp.first;
        }
        return -1;
    }
};