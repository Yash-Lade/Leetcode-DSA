class Solution {
public:
    long long sumAndMultiply(int n) {
        
        if (n == 0) return 0;
        string num = to_string(n);

        long long sum = 0;
        string newNo = "";
        for(auto c : num){
            int no = c - '0';
            
            if(no != 0){
                newNo += c; 
                sum += no;
            } 
        }
        if (newNo.empty()) return 0;

        return (stoll(newNo) * sum);
    }
};