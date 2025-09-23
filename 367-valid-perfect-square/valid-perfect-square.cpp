class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num == 0 || num == 1) return true;
        int low = 2, high = num/2;

        while(low <= high){

            long long mid = low + (high - low) / 2;
            long long squared = mid * mid;

            if(num == squared) return true;

            if(squared < num)  low = mid + 1;
            else high = mid - 1;
        }

        return false;
    }
};