class Solution {
  public:
  bool dp[1001][101];
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        sort(coins.begin(), coins.end());
        memset(dp, true, sizeof(dp));
        func(N-1, K, target, coins);
    }
    bool func(int cur, int k, int x, vector<int> &arr) {
        if(k == 0 && x == 0) return true;
        if(cur < 0) return false;
        if(!dp[x][k]) return dp[x][k];
        
        for(int i = 0; i <= k && arr[cur]*i <= x; i++){
            if(func(cur-1, k-i, x-arr[cur]*i, arr)) return true;
        }
        return dp[x][k] = false;
    }
};
