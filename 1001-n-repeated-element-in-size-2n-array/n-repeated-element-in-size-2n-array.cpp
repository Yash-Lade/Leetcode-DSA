class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        unordered_map<int, int> mpp;
        for(auto num : nums)
        mpp[num]++;

        for(auto mp : mpp){
            if(mp.second == n)
            return mp.first;
        }
        return 0;
    }
};