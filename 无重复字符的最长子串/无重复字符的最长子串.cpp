#include <iostream>
#include <vector>
#include <set>

using namespace std;

int lengthOfLongestSubstring(string s) {
//    int map[256] = {0};int res = 0;int left = 0;
//    for(int i = 0; i < s.size(); ++i)
//    {
//        if(map[s[i]] == 0)//|| map[s[i]] < left)
//            res = max(res, i - left + 1);
//        else
//            left = map[s[i]];
//        map[s[i]] = i+1;
//    }
//    return res;

//        vector<int> m(256, -1);
//        int res = 0, left = -1;
//        for(int i = 0; i < s.size(); ++i) {
//            left = max(left, m[s[i]]);
//            m[s[i]] = i;
//            res = max(res, i - left);
//        }

    set<char> t;
    int res = 0, left = 0, right = 0;
    while (right < s.size())
    {
        if(t.find(s[right]) == t.end())
        {
            t.insert(s[right++]);
            res = max(res, (int)t.size());
        }
        else
        {
            t.erase(s[left++]);
        }
    }
    return res;
}

int main()
{
    string s = "accab";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}
