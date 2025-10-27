class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        
        sort(pizzas.begin(), pizzas.end());
        int n = pizzas.size();
        int totalDays = n/4;
        long long weightGained = 0;

        // if total days are 5 then there'll be 3 odd and 2 even days
        int oddCount, evenCount = totalDays / 2;
        if(totalDays %2 == 0) 
            oddCount = totalDays / 2;

        else
            oddCount = (totalDays / 2) + 1;
            
        // weight gained for all the odd days
        int i = n-1, cnt = 0;
        while(cnt < oddCount){
            weightGained += pizzas[i];
            cnt++;
            i--;
        }

        i--; 
        cnt = 0;
        // weight gained for all the even days
        while(cnt < evenCount){
            weightGained += pizzas[i];
            cnt++;
            i = i - 2;
        }
        return weightGained;
    }
};