class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int no = 0;

       sort(nums.begin(), nums.end());

       for(auto n : nums){
        if(no != n) return no;
        no++;
       }
       return no; 
    }
};