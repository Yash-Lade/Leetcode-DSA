class Solution {
public:
    int smallestNumber(int n, int t) {

        int i = n;
        while(true){
            int num = i;
            int prod = 1;
            while(num > 0){
                int lastdig = num % 10;
                num /= 10;
                prod = prod * lastdig;
            }
            if(prod % t == 0) {
                return i;
            }
            i++;
        }
        return i;
    }
};