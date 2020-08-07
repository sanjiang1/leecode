class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        multimap<int, int> mumap;
        for(int i = 0; i < nums.size(); i++)
            mumap.insert(pair<int, int>(nums[i], i));
        multimap<int, int>::iterator it1 = mumap.begin(), it2 = mumap.end();
        it2--;
        while(it1 != it2)
        {
            if((*it1).first + (*it2).first == target)
            {
                result.push_back((*it1).second);
                result.push_back((*it2).second);
                break;
            } 
            else if((*it1).first + (*it2).first < target)
                it1++;
            else
                it2--;
        }
        return result;
    }
};