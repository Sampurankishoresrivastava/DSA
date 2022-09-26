class Solution {
public:
    string replaceDigits(string s) {
        int i=0;
string ans="";
while(i<s.size()){
ans+=s[i];
if(i+1<s.size()){
int num=s[i+1]-'0';
ans+=s[i]+num;
i+=2;
}
else{
i++;
}
}
return ans;
    }
};
