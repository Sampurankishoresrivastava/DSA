class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int> ans(n+1);
        ans[0]=0;
        ans[1]=1;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                ans[i]=2;
            }
            else{
                for(int j=3;;j=j+2){
                    if(i%j==0){
                        ans[i]=j;
                        break;
                    }
                }
            }
        }
        return ans;
    }
