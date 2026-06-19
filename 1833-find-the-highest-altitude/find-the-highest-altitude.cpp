class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int maxAlt = INT_MIN;
        int currAlt = 0;
        for(int i = 0; i<gain.size(); i++){
            currAlt = currAlt + gain[i];

            if(currAlt > maxAlt) maxAlt = currAlt;
        }
        return (maxAlt < 0)? 0 : maxAlt;
    }
};