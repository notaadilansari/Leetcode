class Solution {
public:
    int upper_bound(vector <int> &nums,int target){
        int lb=nums.size();
        int low=0;
        int high=nums.size()-1;
        while (low<=high){
            int mid =low+(high-low)/2;
            if (nums[mid]>target){
                lb=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return lb-1;
    }
    int lower_bound(vector <int> &nums,int target){
        int lb=nums.size();
        int low=0;
        int high=nums.size()-1;
        while (low<=high){
            int mid =low+(high-low)/2;
            if (nums[mid]>=target){
                lb=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return lb;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if ((lower_bound(nums,target)==nums.size())||nums[lower_bound(nums,target)]!=target)
        {
            return {-1,-1};
        }
        else{
            return {lower_bound(nums,target),upper_bound(nums,target)};
        }
    }
};