class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        vector<int> tab = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
        vector<int> num_split(5);
        int result = 0, m = 0;
        for (int i = 4; i >= 0; i--)
        {
            num_split[i] = (x % 100);
            x /= 100;
        }
        while(num_split[m] == 0)
            m++;
        for (int i = 0; i < 10; i++)
        {
            if (tab[i] > num_split[m])
            {
                result = i-1;
                num_split[m] -= tab[i - 1];
                break;
            }
            else if(tab[i] == num_split[m] || i == 9)
            {
                result = i;
                num_split[m] -= tab[i];
                break;
            }    
        }
        for (int i = m+1; i < 5; i++)
        {
            int cur_num = 0;
            for (int l = 0; l <= i; l++)
                cur_num = cur_num * 100 + num_split[l];
            for (int j = 0; j < 10; j++)
            {
                int test_num = (result * 20 + j) * j;
                int pre_test_num = (result * 20 + j - 1) * (j - 1);
                if (test_num > cur_num)
                {
                    int diff = cur_num - pre_test_num;
                    for (int l = i; l >= 0; l--)
                    {
                        num_split[l] = diff % 100;
                        diff /= 100;
                    }
                    result = result * 10 + (j - 1);
                    break;
                }
                else if (test_num == cur_num || j == 9)
                {
                    int diff = cur_num - test_num;
                    for (int l = i; l >= 0; l--)
                    {
                        num_split[l] = diff % 100;
                        diff /= 100;
                    }
                    result = result * 10 + j;
                    break;
                }
            }
        }
        return result;
    }
};