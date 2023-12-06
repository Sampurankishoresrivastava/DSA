class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        if(n<7){
            for(int i=1;i<=n;i++){
                ans+=i;
            }
        }
        
        else{
                int temp=n/7;

                for(int i=1;i<=temp;i++){
                    ans=ans+(7*(i+3));
                }

                int t=n%7;

                if(t>0){
                    for(int i=1;i<=t;i++){
                    ans= ans+i+temp;
                    }
                }
            
            }
        
        return ans;
    }
};
