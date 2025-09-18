class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map<int , int> mpp;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i]%2 == 0) mpp[nums[i]]++;
        }

        if(mpp.empty()) return -1; // if no even no. in array
        int maxFreq = INT_MIN;
        int ans = 0;

        for(auto itr: mpp){
            int num = itr.first;
            int freq = itr.second;

            if(freq > maxFreq || (freq == maxFreq && num < ans)){
                maxFreq = freq;
                ans = num;
            }
        }

        return ans;
    }
};