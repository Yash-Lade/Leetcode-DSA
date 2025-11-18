class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        int n = bits.size();
        int i = n - 2;
        int count = 0;

        // Count consecutive 1's before the last 0
        while (i >= 0 && bits[i] == 1) {
            count++;
            i--;
        }

        return count % 2 == 0;
    }
};