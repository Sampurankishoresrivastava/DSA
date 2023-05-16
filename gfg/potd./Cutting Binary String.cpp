class Solution{
    public:
    int ans = INT_MAX;
    
    bool isPowOfFive(int num){
        if (num == 0) 
          return false;
        while (num != 1) {
          if (num % 5 != 0) {
             return false;
        }
         num /= 5;
       }
      return true;
    }
    
    void solve(string& s ,int i , int total , int curr , int n){
        if(i==n){
            if(isPowOfFive(curr) ){
              ans = min(ans,total+1);
            }
            if( curr == 0 ){
                ans = min(ans,total);
            }
          return;
        }
        if( s[i] == '0' && curr == 0){
            return ;
        }
        curr = (curr << 1) +(int)(s[i]-'0');
        if( isPowOfFive(curr) ){
            solve(s,i+1,total+1,0,n);
            solve(s,i+1,total,curr, n);
        }
        else{
            solve(s,i+1,total,curr,n);
        }
    }
    int cuts(string s){
        //code
        int n = s.length();
        solve(s,0,0,0,n);
        if(ans == 0 || ans == INT_MAX ) return -1;
        return ans;
    }
};
