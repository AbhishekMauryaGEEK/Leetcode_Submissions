class Solution {
public:
    int path(vector<vector<int>>& grid, int i, int j) {
        int m = grid.size();
        int n = grid[0].size();
        if (i == m - 1 && j == n - 1)
            return grid[i][j];
        if (i >= m || j >= n)
            return INT_MAX;
        int right = path(grid, i, j + 1);
        int left = path(grid, i + 1, j);
        return grid[i][j] + min(right, left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return path(grid, 0, 0);
    }
};