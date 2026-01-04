class Solution {
public:
    string largestEven(string s) {

        int n = s.length();
        for(int i = n-1; i>=0; i--){
            int no = s[i] - '0';
            if(no % 2 == 0) 
                return s;
            else
            {
                s.erase(i,1);
            }
        }
        return "";
    }
};