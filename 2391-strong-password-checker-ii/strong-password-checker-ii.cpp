class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        
        if(password.size()<8) return false;

        bool lc = false, uc = false, dig = false, spec = false;

        string special = "!@#$%^&*()-+";
        for(int i=0; i<password.size(); i++){
            char c = password[i];

            if(islower(c)) lc = true;
            if(isupper(c)) uc = true;
            if(isdigit(c)) dig = true;
            if (special.find(c) != string::npos) spec = true;

            if (i > 0 && password[i] == password[i-1]) return false; // for adjascent
        }

        if(lc && uc && dig && spec) return true;
        
        return false;
    }
};