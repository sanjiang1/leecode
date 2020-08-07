class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        int first = 1, second = 2, temp = 0;
        for(int i = 3; i <= n; i++)
        {
            temp = second;
            second = first + second;
            first = temp;
        }
        return second;
    }
};