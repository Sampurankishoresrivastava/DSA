class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	     int ans = 0;
        int l = 0;
        int n = s.size();
        for(int i = n-1; i>=0; i--){
            if(s[i]=='1'){
                if(l%2)ans += 2;
                else ans += 1;
            }
            l++; 
        }
        return ans%3==0;
	}

};
