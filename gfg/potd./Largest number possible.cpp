// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        string ans="";
        if(N>1 && S<1){
            return "-1";
        }
        while(N>0){
            if(S>=9){
                ans +='0'+9;
                S=S-9;
                N--;
            }
            else{
                ans +='0'+S;
                S=0;
                N--;
            }
        }
        if(S!=0){
            return "-1";
        }
        return ans;
    }
};
