class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        // Traverse from last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++; 
                return digits; // done, no carry
            }
            digits[i] = 0; // set current digit to 0 and continue carry
        }
        
        // If all digits were 9 (like 999 -> 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};