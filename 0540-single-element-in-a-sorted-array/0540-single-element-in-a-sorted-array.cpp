class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int singlenumber=0;
        for (int i = 0; i < nums.size(); i++)
        {
            singlenumber=singlenumber^nums[i];
        }
        return singlenumber;
    }
};