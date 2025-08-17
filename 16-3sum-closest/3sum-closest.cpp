class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = nums[0]+nums[1]+nums[2];
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                // here we will use a function called abs, means absolute which returns the absolute value of an integer.
                // Absolute means how far it is from 0. So abs(-5) be 5, abs(5) be 5, abs(0) = 0

                if(abs(target-sum)< abs(target-closest)) // check if diff of current sum is less than closest
                closest=sum;

                if(sum==target) return sum;
                else if(sum>target) k--;
                else j++;
            }
        }
        return closest;
    }
};