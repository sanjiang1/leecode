class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dp(nums[0]);
        int result = nums[0];
        for (int i = 1; i < int(nums.size()); i++)
        {
            dp = max(dp + nums[i], nums[i]);
            result = max(dp, result);
        }
        return result;
    }
};