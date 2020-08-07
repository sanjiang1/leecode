class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 0)
            return 0;
        int cnt = 0;
        for(int i = int(s.size()) - 1; i >= 0; i--)
        {
            if(s[i] != ' ')
                cnt++;
            else if(cnt != 0 && s[i] == ' ')
                return cnt;
        }
        return cnt;
    }
};