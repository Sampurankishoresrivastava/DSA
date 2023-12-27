class Solution {
public:
    // int dp[31];

    // Solution(){
    //     memset(dp, -1, sizeof (dp));
    // }

    int fib(int n) {
        // vector<int> dp(n+1, -1);

        // if(n<=1){
        //     return n;
        // }

        // if(dp[n]!=-1){
        //     return dp[n];
        // }

        // return dp[n]= fib(n-1) + fib(n-2);


        // tabulation method

        // if(n<=1){
        //     return n;
        // }

        // vector<int> dp(n+1, -1);

        // dp[0]=0;
        // dp[1]=1;

        // for(int i=2;i<=n;i++){
        //     dp[i]= dp[i-1]+ dp[i-2];
        // }

        // return dp[n];

        // optizimed sc 

        if(n<=1){
            return n;
        }
        
        int prev=1;
        int prev2=0;

        for(int i=2;i<=n;i++){
            int curri= prev+ prev2;
            prev2=prev;
            prev=curri;
        }
        
        return prev;
    }
};
