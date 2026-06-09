class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> ans;
        int pivotCount = 0;

        for(auto num: nums){

            if(num == pivot) pivotCount++;

            if(num < pivot)
            ans.push_back(num);
        }
        
        while(pivotCount){
            ans.push_back(pivot);
            pivotCount--;
        }
        
        for(auto num: nums)
        if(num > pivot)
        ans.push_back(num);

        return ans;
    }
};