class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> squared;

        for(int i=0 ; i<n ; i++)
        {
            squared.push_back(nums[i]*nums[i]);
        }
        sort(squared.begin(), squared.end());
        return squared;
    }
};