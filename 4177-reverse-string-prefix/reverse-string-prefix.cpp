class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k == 1) return s;
        if(k == s.size()){
            reverse(s.begin(), s.end());
            return s;
        }

        int n = s.length();
        int i = 0, j = i + k - 1;
        
        while(i<j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    
        return s;
    }
};