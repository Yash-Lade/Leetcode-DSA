class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> sorted_arr = arr;
        unordered_map<int, int> mpp;

        int rank = 1;
        sort(sorted_arr.begin(), sorted_arr.end());
        for(auto num: sorted_arr){

            if(mpp.find(num) != mpp.end())
            continue;
            mpp[num] = rank++;
        }

        for(int i = 0; i<arr.size(); i++){
            arr[i] = mpp[arr[i]];
        }
        
        return arr;
    }
};