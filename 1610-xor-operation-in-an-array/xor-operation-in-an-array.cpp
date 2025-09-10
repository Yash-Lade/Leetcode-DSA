class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> arr(n,0);
        for(int i=0; i<n; i++) arr[i] = start + 2 * i;

        int xorr = arr[0];
        for(int i=1; i<n; i++) xorr = xorr ^ arr[i];

        return xorr;
        
    }
};