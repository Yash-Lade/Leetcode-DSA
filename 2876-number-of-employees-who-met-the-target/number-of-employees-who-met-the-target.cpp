class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        
        int employees = hours.size();
        int ans = 0;
        for(int i = 0; i < employees ; i++){
            if(hours[i] >= target) ans++;
        }
        return ans;
    }
};