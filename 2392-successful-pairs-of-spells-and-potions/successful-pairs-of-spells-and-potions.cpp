class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        int m = spells.size();
        int n = potions.size();
        vector<int> ans;
        sort(potions.begin(), potions.end());

        for(int i = 0; i<m; i++){

            int spell = spells[i];
            // minPotion * spell >= success thereforce minPotion = success/spell
            long long minPotion = (success + spell - 1)/ spell; // ceil of success/spell

            // now if last element of postions is < minPotion then ans be 0
            int maxPotion = potions[n-1];
            if(maxPotion < minPotion){
                ans.push_back(0);
                continue; // skip the lower bound
            } 

            // this lower bound return pointer by default so do a substraction to get index
            // int index = lower_bound(potions.begin(), potions.end(), minPotion) - potions.begin();  minPotion ka  Lowerbound nikalne ke liye

            // Lower Bound using custon function
            int index = lowerBound(potions, 0, n-1, minPotion);

            int count = n - index;
            ans.push_back(count);
        }
        return ans;
    }

    int lowerBound(vector<int>& potions, int low, int high, int minPotion){

        int ans = low;
        while(low <= high){

            int mid = low + (high - low)/2;
            if(potions[mid] >= minPotion){
                ans = mid;
                high = mid - 1;
            }
            else
            low = mid + 1;
        }
        return ans;
    }
};