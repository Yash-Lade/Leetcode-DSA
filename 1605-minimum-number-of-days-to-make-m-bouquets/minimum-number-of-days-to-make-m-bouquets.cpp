class Solution {
public:

    // fn to get get at ith day is the bouquet possible to make
    bool possible(vector<int>& bloomDay, int day, int m, int k){

        int cnt = 0, nOfBuqt = 0;

        for(int i = 0; i < bloomDay.size(); i++){
            // day var is the day in which we are checking if flower bloomed
            if(bloomDay[i] <= day)
            cnt++;

            else{
                nOfBuqt += (cnt / k);
                cnt = 0;
            }
        }
        nOfBuqt += (cnt / k);

        if(nOfBuqt >= m) return true;
        
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        
        // exceptional case in which total required bouqets can't be formed
        if(bloomDay.size() < (long long)m*k) return -1;

        int maxi = INT_MIN, mini = INT_MAX;
        for(auto day : bloomDay)
        {
            if(day > maxi) maxi = day;
            else if(day < mini) mini = day;
        }

        
        int low = mini, high = maxi;
        int ans = maxi;
        while(low <= high){
            
            int mid = low + (high - low)/2;

            if(possible(bloomDay, mid, m, k)){ // if its not possible on mid day then it is now possible in entire right half
                ans = mid;
                high = mid - 1;
            }
            else{
                // if this is the case means mid day is possible so ne sense in searching in mid + 1 etc. days beacuse we need minimum
                low = mid + 1;
            }
        }
        return ans;
    }
};