class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = m + n;
        for (int i = p-1; i >= 0; i--)
        {
            if(m != 0 && (n == 0 || nums1[m-1] >= nums2[n-1]))
            {
                nums1[i] = nums1[m - 1];
                m--;
            }
            else
            {
                nums1[i] = nums2[n - 1];
                n--;
            }
        }
    }
};
