class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int count = 0;
        string ans = "";

        for(int i=0; i<s.size(); i++){

            if(s[i] == ')') count--; 
            if(count != 0) ans.push_back(s[i]); // if stack is empty then add '(' to stack but don't add it to the ans
            if(s[i] == '(') count++; // if stack not empty then add it to stack as well as ans

            // if ')' comes then pop the opening from the stack
        }
        return ans;
    }
};