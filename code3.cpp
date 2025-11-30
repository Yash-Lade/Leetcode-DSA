class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0) return n;            // every element has >= 0 greater elements

        sort(nums.begin(), nums.end());
        int qualified = 0;

        for (int i = 0; i < n; ++i) {
            // first index strictly greater than nums[i]
            int idx = upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin();
            int totalGreater = n - idx;
            if (totalGreater >= k) 
                qualified++;
        }
        return qualified;    
    }
};©leetcode
