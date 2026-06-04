class Solution {
public:
    int totalWaviness(int num1, int num2) {
        
        if(num1 > num2) return 0;
        
        int totalWavinessCount = 0;
        
        for(int i = num1; i <= num2; i++){
            string num = to_string(i);

            for (int j = 1; j < num.length() - 1; j++) {
                int prev = num[j-1] - '0';
                int curr = num[j] - '0';
                int next = num[j+1] - '0';

                if ((curr < prev && curr < next) || (curr > prev && curr > next)) {
                    totalWavinessCount++;
                }
            }
        }
        
        return totalWavinessCount;
    }
};