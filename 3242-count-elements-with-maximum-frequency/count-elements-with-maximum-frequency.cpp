class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int, int> mpp;

        for(auto num: nums)
        mpp[num]++;

        int maxFreq = 0, elements = 0;

        for(auto mp : mpp){
            if(mp.second > maxFreq)
            {
                maxFreq = mp.second;
                elements = mp.second;
            }
            else if(mp.second  == maxFreq)
            elements = elements + mp.second;
        }

        return elements;
    }
};