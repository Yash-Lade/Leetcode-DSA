class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        int divSum = 0;

        for(int i = 1; i<num; i++)
        if(num % i == 0)
        divSum += i;
        
        return divSum == num;
    }
};