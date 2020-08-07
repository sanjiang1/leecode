class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int> result;
        for_each(nums1.begin(), nums1.begin() + m, [&result](const int &x) { result.insert(x); });
        for_each(nums2.begin(), nums2.begin() + n, [&result](const int &x) { result.insert(x); });
        nums1.clear();
        for_each(result.begin(), result.end(), [result, &nums1](const int &x) { nums1.push_back(x); });
    }
};