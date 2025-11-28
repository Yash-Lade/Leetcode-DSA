class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {

        vector<bool> ans(nums.size());
        int prev = 0;

        for (int i = 0; i < nums.size(); i++) {
            prev = (prev * 2 + nums[i]) % 5;
            ans[i] = (prev == 0);
        }
        return ans;
    }
};