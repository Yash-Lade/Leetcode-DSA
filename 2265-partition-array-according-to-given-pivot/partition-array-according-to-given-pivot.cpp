class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> leftArr;
        vector<int> rightArr;
        int pivotCount = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < pivot) leftArr.push_back(nums[i]);
            else if(nums[i] > pivot)rightArr.push_back(nums[i]);
            else pivotCount++;

        }
        while(pivotCount){
            leftArr.push_back(pivot);
            pivotCount--;
        } 
        for(auto num: rightArr) leftArr.push_back(num);

        return leftArr;
    }
};