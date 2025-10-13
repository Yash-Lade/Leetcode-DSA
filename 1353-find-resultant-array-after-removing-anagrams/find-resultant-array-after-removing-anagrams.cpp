class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        
        for (auto& word : words) {
            if (res.empty() || !isAnagram(res.back(), word)) {
                res.push_back(word);
            }
        }
        return res;
    }

    bool isAnagram(const string& a, const string& b) {
        if (a.size() != b.size()) return false;
        string sa = a, sb = b;
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());
        return sa == sb;
    }
};