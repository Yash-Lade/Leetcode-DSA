class Solution {
public:
    bool findOriginal(vector<int> & nums, int original){
        int low = 0, high = nums.size()-1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == original) return true;

            else if(nums[mid] < original) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
    int findFinalValue(vector<int>& nums, int original) {
        
        sort(nums.begin(), nums.end());
        bool foundValue = findOriginal(nums, original);
        while(foundValue){
            original = original * 2;
            foundValue = findOriginal(nums, original);
        }
        return original;
    }
};