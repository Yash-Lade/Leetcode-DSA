class Solution {
public:
    bool allCapitals(string word){
        for(auto c : word){
            if(c < 'A' || c > 'Z')
            return false;
        }
        return true;
    }
    bool allSmalls(string word){
        for(auto c : word){
            if(c < 'a' || c > 'z')
            return false;
        }
        return true;
    }
    bool firstCapital(string word){
        if (word[0] < 'A' || word[0] > 'Z') 
        return false; // first must be uppercase
    
        for (int i = 1; i < word.length(); i++) {
            if (word[i] < 'a' || word[i] > 'z')
                return false; // rest must be lowercase
    }
    return true;
    }
    bool detectCapitalUse(string word) {
        
        if(allCapitals(word) || allSmalls(word) || firstCapital(word))
        return true;

        return false;
    }
};