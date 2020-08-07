class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> result;
        if(nums.size() == 1)
            return nums[0];
        for(int i = 0; i <= nums.size() - 1; i++)
            for(int j = i+1; j <= nums.size(); j++)
                result.push_back(accumulate(nums.begin() + i, nums.begin() + j, 0));
        return(*(max_element(result.begin(), result.end())));
    }
};