class Solution {
public:
	int findLongestChain(vector<vector<int>>& pairs) {
		int n=pairs.size();
		sort(pairs.begin(),pairs.end());
		vector<vector<int>> dp(n+1,vector<int>(n+2,0));
		for(int i=n-1;i>=0;i--){
			for(int prev=i-1;prev>=-1;prev--){
				int pick=INT_MIN;
				if(prev==-1 || pairs[prev][1]<pairs[i][0])pick=1+dp[i+1][i+1];
				int notpick=dp[i+1][prev+1];
				dp[i][prev+1]=max(pick,notpick);
			}
		}
		return dp[0][0];
	}
};
