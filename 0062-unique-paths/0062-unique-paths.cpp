class Solution {
public:
    int dat[101][101] = {};

    int myfun(int m, int n) {
        if (m == 0 || n == 0) {
            return 0;
        }
        if (m == 1 || n == 1) {
            return 1;
        }
        if (dat[m][n] == 0) {
            dat[m][n] = myfun(m - 1, n) + myfun(m, n - 1);
        }
        return dat[m][n];
    }

    int uniquePaths(int m, int n) {
        return myfun(m, n);
    }
};
