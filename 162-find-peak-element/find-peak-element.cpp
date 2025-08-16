class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int max=INT_MIN;
        int peak=0;
        for(int i=0;i<nums.size();i++)
        if(nums[i]>max){
            max=nums[i];
            peak=i;
        } 
        return peak;
    }
};