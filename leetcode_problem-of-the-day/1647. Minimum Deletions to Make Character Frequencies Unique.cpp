class Solution {
public:
    int minDeletions(string s) {
        map<char,int> mp;
        set<int> st;
        int count=0;
        for(char it: s){
            mp[it]++;
        }
        
        for(auto i:mp){
            while(i.second >0 and st.find(i.second)!=st.end()){
                i.second-=1;
                count++;
            }
            st.insert(i.second);
        }
        return count;

    }
};
