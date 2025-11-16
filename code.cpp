class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int smallest = nums[0];
        int largest = nums[n-1];
        int secondLargest = nums[n-2];

        return largest + secondLargest - smallest;
    }
};
