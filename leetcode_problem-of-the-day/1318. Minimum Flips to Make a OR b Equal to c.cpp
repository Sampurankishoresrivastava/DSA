class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        while(a>0 || b>0 || c>0){
            int aa = a%2;
            int bb= b%2;
            int cc = c%2;
            if(cc==1){
                if(aa!=1 && bb!=1){
                    ans+=1;
                }
            }
            else{
                if(aa==1 && bb==1){
                    ans+=2;
                }
                else if(aa==0 && bb==1 || aa==1 && bb==0){
                    ans+=1;
                }
            }
            a/=2;
            b/=2;
            c/=2;
        }
        return ans;
    }
};
