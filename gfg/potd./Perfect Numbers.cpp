class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
         if(N==1){
             return 0;
         }
        long long count=1;
        long long factor1,factor2;
        for(long long i=2;i<=sqrt(N);i++){
            if(N%i==0){
                factor1=i;
                factor2=N/i;
                count=count+factor1+factor2;
            }
        }
        if(count==N){
            return 1;
        }
        return 0;
    }
};
