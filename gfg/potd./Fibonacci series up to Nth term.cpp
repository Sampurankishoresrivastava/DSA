class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        vector<int> ans(n+1);
        int mod=1000000007;
        
        ans[0]=0;
        ans[1]=1;
        for(int i=2;i<n+1;i++){
            int temp=ans[i-2]+ans[i-1];
            ans[i]=temp%mod;
        }
        
        return ans;
    }
};
