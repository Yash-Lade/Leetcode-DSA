class Solution {
public:

    long long hrsToEat(const vector<int>& piles, long long hourly){
        long long cnt = 0;
        for (int val : piles) {
            cnt += (val + hourly - 1) / hourly; // ceil division
        }   
        return cnt;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int mx = INT_MIN;
        for(int pile: piles)
            mx = max(mx, pile);

        long long low = 1, high = mx; // koko can eat at least 1 and at most mx per hour
        int ans = mx;

        while(low <= high){
            long long mid = low + (high - low)/2;

            long long totalhrs = hrsToEat(piles, mid);
            if(totalhrs <= h){ // valid speed, try smaller
                ans = (int)mid;
                high = mid - 1;
            }
            else { // too slow, need bigger speed
                low = mid + 1;
            }
        }

        return ans;
    }
};
