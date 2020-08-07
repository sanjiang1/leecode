int removeElement(vector<int>& nums, int val) {
        return distance(nums.begin(),partition(nums.begin(),nums.end(),[=](const int& a){return a != val;}));
    }