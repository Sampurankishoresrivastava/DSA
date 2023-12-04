class Solution {
public:
    string largestGoodInteger(string num) {
        int ans=-1;
        
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                int temp= num[i] - '0';
                ans=max(ans, temp);
            }
        }
        
        if(ans!=-1){
            string res= string(3, '0'+ ans);
            return res;
        }

        return "";
    }
};
