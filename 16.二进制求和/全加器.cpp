class Solution {
public:
    string addBinary(string a, string b) {
        bool c_out = false;
        int s_size = max(a.size(), b.size());
        a.insert(0, s_size-a.size(), '0');
        b.insert(0, s_size-b.size(), '0');
        string result(s_size, '0');
        for(int i = s_size - 1; i >= 0; i--)
        {
            if(a[i] == '0' && b[i] == '0')
            {
                result[i] = c_out ? '1' : '0';
                c_out = false;
            }
            else if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
            {
                if(c_out)
                {
                    result[i] = '0';  
                    c_out = true;
                }
                else
                {
                    result[i] = '1'; 
                    c_out = false; 
                } 
            }
            else if(a[i] == '1' && b[i] == '1')
            {
                result[i] = c_out ? '1' : '0';
                c_out = true;
            }
        }
        if(c_out)
            result.insert(0, "1");
        return result;
    }
};