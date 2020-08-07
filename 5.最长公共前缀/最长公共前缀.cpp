class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string s = strs[0];
        string result = "";
        bool is_ok = false;
        for(int i = 0; i < s.length(); i++)
        {
            for(int j = 0; j < strs.size(); j++)
                if(strs[j][i] != s[i])
                {
                    is_ok = true;
                    break;
                }
            if(is_ok)
                break;
            result.push_back(s[i]);
        }
        return result;
    }
};