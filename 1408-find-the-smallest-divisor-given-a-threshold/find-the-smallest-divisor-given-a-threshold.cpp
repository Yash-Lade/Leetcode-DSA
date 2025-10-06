class Solution {
public:
    int findMax(vector<int>& nums){
        int maxi = INT_MIN;
        for(auto num : nums)
        if(num > maxi)
        maxi = num;

        return maxi;
    }

    int computeSum(vector<int>& nums, int divisor){
        int sum = 0;
        for (int num : nums) {
            sum += (num + divisor - 1) / divisor;  // ceil(num / divisor)
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxval = findMax(nums);
        int low = 1, high = maxval;
        int ans = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            int sum = computeSum(nums, mid);
            
            if(sum <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};