class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        int zc=s.size()-count;

        while(count>1){
            ans.push_back('1');
            count--;
        }

        while(zc){
            ans.push_back('0');
            zc--;
        }

        ans.push_back('1');
        
        return ans;
    }
};
