class Solution {
public:
    int totalWeight(vector<int>& weights){
        int allWeight = 0;
        for(int i = 0; i< weights.size(); i++){
            allWeight += weights[i];
        }
        return allWeight;
    }
    int minCap(vector<int>& weights){ // it is the max weight in the weights array
        int maxi = INT_MIN;
        for(int i = 0; i<weights.size(); i++){
            if(maxi < weights[i]) maxi = weights[i];
        }
        return maxi;
    }
    int daysRequired(vector<int>& weights, int days, int cap){

        int currDays = 1;
        int load = 0;
        for(int i = 0; i<weights.size(); i++){
            
            if(load + weights[i] > cap)
            {
                currDays++;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return currDays;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sumWeight = totalWeight(weights);
        if(days == 1) return sumWeight;
        if(days == 2) return sumWeight/2;

        int low = minCap(weights);
        int high = sumWeight;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low)/2;

            int daysReq = daysRequired(weights, days, mid);
            
            if(daysReq <= days){
                ans = mid;
                high = mid - 1;
            } 
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};