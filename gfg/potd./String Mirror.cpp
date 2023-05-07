class Solution{
public:
    string stringMirror(string str){
        // Code here 
        string temp = "" ,ans = "";
        int n = str.size();
        temp+=str[0];
        if(n==1 || str[0]<=str[1]) {
            temp+=str[0];
            return temp;
        }
        for(int i = 1;i<n;++i) {
            if(str[i]<=str[i-1]){
                temp+=str[i];
            }
            else break;
        }
        ans+=temp;
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};
