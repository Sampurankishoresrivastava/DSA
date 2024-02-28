
class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int n=s.size();
        
        char l=s[n-1];
        char sl=s[n-2];
        char tl=s[n-3];
        
        
        int no=(tl - '0') * 100 + (sl- '0') * 10 + (l- '0');
        
        
        if(n<3){
            int a=stoi(s);
            if(a%8==0){
                return 1;
            }
            else{
                return -1;
            }
        }
        
        else{
            if(no%8==0){
                return 1;
            }
        }
        
        return -1;
    }
};
