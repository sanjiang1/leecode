class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        if(n == 2) 
            return 2;
        int[][] base = {{1, 1}, {1, 0}};
        int[][] res = matrixPower(base, n-2);
        return base[0][0] + res[1][0];
    }

    int[][] matrixPower(int[][] m, int p)
    {
        int[][] res = new int[m.length][m[0].length];
        for (int i = 0; i < m.length; i++)
            res[i][i] = 1;

        int[][] tmp = m;
        for (; p != 0; p>>1)
        {
            if(p & 1 == 1)
                res = muliMatrix(tmp, res);
            muliMatrix(tmp, tmp);
        }
        return res;
    }  

    int[][] muliMatrix(int[][] m1, int[][] m2) 
    {
        int[][] res = new int[m1.length][m2[0].length];

        for (int i = 0; i < m1.length; i++)
            for (int j = 0; j < m2[0].length; j++)
                for (int k = 0; k < m2.length; k++)
                    res[i][j] += m1[i][k] * m2[k][j];
        return res;
    }
};