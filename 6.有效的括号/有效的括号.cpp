class Solution {
public:
    bool isValid(string s){
        stack<char> mystack;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')')
            {
                if(mystack.empty() || mystack.top() != '(')
                    return false;
                else
                    mystack.pop();
            }
            else if(s[i] == ']')
            {
                if(mystack.empty() || mystack.top() != '[')
                    return false;
                else
                    mystack.pop();
            }
            else if(s[i] == '}')
            {
                if(mystack.empty() || mystack.top() != '{')
                    return false;
                else
                    mystack.pop();
            }
            else
                mystack.push(s[i]);
        }
        if(mystack.empty())
            return true;
        else
            return false;
    }
};