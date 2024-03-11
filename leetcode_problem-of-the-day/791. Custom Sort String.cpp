class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        unordered_set<char> st;
        for(int i=0;i<order.size();i++){
            for(int j=0;j<s.size();j++){
                if(order[i]==s[j]){
                    ans+=order[i];
                    st.insert(order[i]);
                }
            }
        }

        for(int i=0;i<s.size();i++){
            if(st.find(s[i])==st.end()){
                ans+=s[i];
            }
        }
        return ans;
    }
};
