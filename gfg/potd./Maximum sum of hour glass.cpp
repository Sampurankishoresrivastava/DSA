// User function Template for C++

class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>>& mat) {
        int ans = -1;
        for (int i = 1; i < n - 1; ++i)
            for (int j = 1; j < m - 1; ++j)
                ans = max(ans, accumulate(mat[i - 1].begin() + j - 1, mat[i - 1].begin() + j + 2, 0) +
                               mat[i][j] +
                               accumulate(mat[i + 1].begin() + j - 1, mat[i + 1].begin() + j + 2, 0));
        return ans;
    }
};
