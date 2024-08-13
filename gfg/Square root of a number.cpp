class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        // int i = 2;
        // int res = 1;
        // if(n==0 || n==1){
        //     return n;
        // }
        // while(res <= n){
        //     res=i*i;
        //     i++;
        // }
        // return i-2;
        int ans = sqrt(n);
        return ans;
    }
};
