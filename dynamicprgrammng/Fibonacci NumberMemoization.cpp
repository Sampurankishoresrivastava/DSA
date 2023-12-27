class Solution {
public:
    int dp[31];

    Solution(){
        memset(dp, -1, sizeof (dp));
    }

    int fib(int n) {
        // vector<int> dp(n+1, -1);

        if(n<=1){
            return n;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        return dp[n]= fib(n-1) + fib(n-2);
    }
};
