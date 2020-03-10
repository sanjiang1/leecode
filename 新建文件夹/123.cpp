#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end(), [](const int & p1, const int & p2){ return p1 < p2;});
    if(nums1.size() % 2 == 0)
        return (nums1[nums1.size() / 2 - 1] + nums1[nums1.size() / 2]) / 2.0;
    else
        return nums1[(nums1.size() - 1)/ 2];
}

int main()
{
    vector<int> n1 = {1, 4, 2};
    vector<int> n2 = {2, 3, 4};
    cout << findMedianSortedArrays(n1, n2) << endl;
    return 0;
}
