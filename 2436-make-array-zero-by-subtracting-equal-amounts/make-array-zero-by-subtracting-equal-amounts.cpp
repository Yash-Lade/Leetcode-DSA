class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // Amazon Question
        // Obs = the answer would be the no. of unique elements of array
        unordered_set<int> s;
        for(int itr: nums)
        if(itr!=0)
        s.insert(itr);
        
        return s.size();
    }
};