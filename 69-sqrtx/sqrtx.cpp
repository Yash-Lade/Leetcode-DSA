class Solution {
public:
    int mySqrt(int x) {
        
        int st = 0, end = x;
        int val = -1;
        while(st <= end){
            long long mid = st + (end - st) /2;

            if(mid * mid == x) return mid;

            else if(mid * mid > x) end = mid - 1;

            else{ // mid*mid<x
                val = mid;
                st = mid+1;
            } 
        }
        return val;
    }
};