

class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string res=" ";
          while(n!=0){
              long long ans=(n-1)%26;
               res+=ans+'A';
              n=(n-1)/26;
          }
          reverse(res.begin(),res.end());
          return res;
    }
};
