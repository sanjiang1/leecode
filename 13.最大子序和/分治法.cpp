class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        //类似寻找最大最小值的题目，初始值一定要定义成理论上的最小最大值
        int result = INT_MIN;
        int numsSize = int(nums.size());
        result = maxSubArrayHelper(nums, 0, numsSize - 1);
        return result;
    }

    int maxSubArrayHelper(vector<int> &nums, int left, int right)
    {
        if(left == right)
            return nums[left];
        int mid = (left + right) / 2;
        int leftsum = maxSubArrayHelper(nums, left, mid);
        int rightsum = maxSubArrayHelper(nums, mid + 1, right);
        int midsum = findMaxCrossingSubarray(nums, left, mid, right);
        int result = max(leftsum, rightsum);
        result = max(result, midsum);
        return result;
    }

    int findMaxCrossingSubarray(vector<int> &nums, int left, int mid, int right)
    {
        int leftsum = 0;
        int leftmax = INT_MIN;
        for(int i = mid; i >= left; i--)
        {
            leftsum += nums[i];
            leftmax = max(leftmax, leftsum);
        }
        
        int rightsum = 0;
        int rightmax = INT_MIN;
        for(int i = mid + 1; i <= right; i++)
        {
            rightsum += nums[i];
            rightmax = max(rightmax, rightsum);
        }   

        return (leftmax + rightmax);
    }
};