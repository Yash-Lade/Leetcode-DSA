class Solution {
public:
    int countPartitions(vector<int>& nums) {
        
        int n = nums.size();
        int totalSum = 0;
        for(auto num: nums) totalSum+= num;

        int currSum = 0;
        int count = 0;
        for(int i = 0; i < n - 1; i++){
            currSum += nums[i]; // left sum
            totalSum = totalSum - nums[i]; // right sum
            if((totalSum - currSum) % 2 == 0) count++;
        }
        return count;
    }
};