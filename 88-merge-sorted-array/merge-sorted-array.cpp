class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;

        int i=0,j=0;
        while(i<m && j<n){
            if(nums2[j]<nums1[i]){
                arr.push_back(nums2[j]);
                j++;
            }
            
            else{
                arr.push_back(nums1[i]);
                i++;
            }
        }
        while(j<n){
            arr.push_back(nums2[j]);
            j++;
        }
        while(i<m){
            arr.push_back(nums1[i]);
            i++;
        }

        for(int i=0;i<m+n;i++){
            nums1[i]=arr[i];
        }
    }
};