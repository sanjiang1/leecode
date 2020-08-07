class Solution {
public:
    int romanToInt(string s) {
        int x = 0;
        int len = 0;
        int it1, it2;
        map<char, int> myhash({{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}});
        while(len < s.size() - 1)
        {
            it1 = myhash.at(s[len]), it2 = myhash.at(s[len + 1]);
            x += (it1 >= it2) ? it1 : -it1;
            len ++;
        }
        x += myhash.at(s[len]);
        return x;
    }
};