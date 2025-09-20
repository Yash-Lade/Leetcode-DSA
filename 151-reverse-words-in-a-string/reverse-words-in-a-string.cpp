class Solution {
public:
    string reverseWords(string s) {
        
        // first reverse entire string to correct the position
        reverse(s.begin(), s.end());

        // then reverese the each words to correct the flipped form eg - olleh -> hello

        string ans = "";
        for(int i=0;i<s.size();i++)
        {
            string temp = "";
            while(i<s.size() && s[i] != ' ')
            {
                temp += s[i];
                i++;
            }
            reverse(temp.begin(), temp.end());
            
            if(temp.length() > 0)
            ans = ans + " " + temp;
        }

        // now we have an extra space in 0th index so we return string from 1st index
        return ans.substr(1);
    }
};