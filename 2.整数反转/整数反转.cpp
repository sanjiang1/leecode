class Solution {
public:
    int reverse(int x) {
        int xx = 0;
        long long xxx = x;
        bool is_minus = xxx < 0;
        xxx = abs(xxx);
        while(1)
        {
            if(xxx == 0)
                break;
            else
            {
                if(xx > INT_MAX / 10)
                    return 0;
                xx *= 10;
                xx += xxx%10;
            }
            xxx /= 10;
        }
        if(!is_minus)
            return xx;
        else
            return -xx;
    }
};