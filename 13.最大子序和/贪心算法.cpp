class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], max_sum = sum;
        for (int i = 1; i < nums.size(); i++)
        {
            if(sum < 0)
                sum = 0;
            sum += nums[i];
            if(sum > max_sum)
                max_sum = sum;
        }
        return max_sum;
    }
};