class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (auto& opr : operations) {
            if (opr == "++X" || opr == "X++")
                x++;
            else
                x--;
        }
        return x;
    }
};