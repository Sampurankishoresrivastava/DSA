class Solution {
public:
    int partitionString(string s) {
        map<char,int> ans;
        int count=1;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ans.find(ch) != ans.end()){
                count++;
                ans.clear();
                ans[ch]++;
            }
            else{
                ans[ch]++;
            }
        }
        return count;
    }
};
