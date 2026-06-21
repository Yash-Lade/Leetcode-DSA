class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(), costs.end());

        int totalBuys = 0;
        for(int i = 0; i < costs.size(); i++){
            
            if(coins-costs[i] < 0) continue;
            coins -= costs[i];

            totalBuys++;
        }
        return totalBuys;
    }
};