class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here 
            int decValue=0;
            int base = 1;
            int j=s.length()-1;
            
            while(j>=0){
                if(s[j] == '1'){
                    // including base
                    decValue+=base;
                }
                // we will mod side by side to prevent integer overflow
                decValue%=m;
                base*=2;
                base%=m;
                j--;
            }
            
            return decValue;
        }
};
