class Solution {
public:
    bool hasSameDigits(string s) {
        
        while (s.size() > 2) {
            string temp;
            for (int i = 0; i < s.size() - 1; i++) {
                int a = s[i] - '0';
                int b = s[i + 1] - '0';
                int sum = (a + b) % 10;
                temp.push_back(sum + '0');
            }
            s = temp;  
        }
        return (s[0] == s[1]);
    }
};