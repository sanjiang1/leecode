class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // if(nums.size() < 2)
        unsigned i;
        for(i=0;i<nums.size();i++)
            if(nums[i] == val) break; // 定位到第一个val的位置
        for(unsigned j=i+1;j<nums.size();j++)
        {
            if(nums[j] == val) continue;
            nums[i] = nums[j];
            i++;
        }
        return i;
    }
};