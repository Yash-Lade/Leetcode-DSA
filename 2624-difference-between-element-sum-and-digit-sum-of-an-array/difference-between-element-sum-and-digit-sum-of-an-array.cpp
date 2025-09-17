class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = 0, digSum = 0;

        for(int i=0; i<nums.size(); i++){
            eleSum = eleSum + nums[i];

            if(nums[i] > 9){
                int n = nums[i];
                int lastdig = 0;
                while(n){
                    lastdig = n%10;
                    n/=10;
                    digSum = digSum + lastdig;
                }
            }
            else
            digSum = digSum + nums[i];
        }

        return abs(eleSum - digSum);
    }
};