class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 0)
            return 0;
        int cnt = s[0] == ' ' ? 0 : 1;
        for(int i = 1; i < int(s.size()); i++)
        {
            if(s[i] != ' ')
            {   
                if(s[i-1] == ' ')
                    cnt = 1;
                else
                    cnt++;
            }
        }
        return cnt;
    }
};