class Solution {
public:
    bool isPalindrome(int x) {
        int xxx = x;
        long long xx = 0;
        if(xxx < 0)
            return false;
        else if(xxx >= 0 && xxx < 10)
            return true;
        while(xxx != 0)
        {
            xx = xx * 10 + xxx % 10;
            xxx /= 10;
        }
        return xx == x;
    }
};