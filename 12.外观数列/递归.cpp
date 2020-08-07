class Solution {
public:
    string countAndSay(int n) {
        string str_start = "1";
        for(int i = 1; i < n; i++)
            str_start = iter(str_start);
        return str_start;
    }

    string iter(string str){
        int num = 1;
        string result;
        for(int i = 0; i < str.size() - 1; i++)
        {
            if(str[i] == str[i+1])
                num ++;
            else
            {
                result += num + '0';
                result += str[i];
                num = 1;
            }
        }
        result += num + '0';
        result += str[str.size()-1];
        return result;
    }
};