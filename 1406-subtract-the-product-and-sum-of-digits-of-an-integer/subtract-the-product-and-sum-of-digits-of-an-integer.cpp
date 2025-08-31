class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;

        int lastdig =0;
        while(n){
            lastdig = n%10;
            n/=10;
            prod = prod * lastdig;
            sum = sum + lastdig;
        }
        return prod - sum;
    }
};