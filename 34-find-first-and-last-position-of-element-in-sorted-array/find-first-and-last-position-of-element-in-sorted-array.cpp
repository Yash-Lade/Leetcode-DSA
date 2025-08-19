class Solution {
public:

    int lb(vector<int>& nums,int n, int target){
        int low=0, high=n-1;
        int first=n;
        while(low<=high){
            int mid= low + (high-low)/2;

            
            if(nums[mid]>=target){
                first=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return first;
    }   
    int ub(vector<int>& nums,int n, int target){
        int low=0, high=n-1;
        int last=n;
        while(low<=high){
            int mid= low + (high-low)/2;

            if(nums[mid]>target){
                last=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
    
        int lbb = lb(nums, n, target);
        int ubb = ub(nums, n, target)-1;
        
        if( lbb==n || nums[lbb]!=target) 
        return {-1,-1};
        
        return {lbb,ubb};
    }

};