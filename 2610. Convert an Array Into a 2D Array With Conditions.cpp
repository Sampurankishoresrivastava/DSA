class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<vector<int>> ans;
        int maxi=INT_MIN;
        for(auto i:nums){
            mp[i]++;
            if(maxi<mp[i]){
                maxi=mp[i];
            }
        }
        for(int i=0;i<maxi;i++){
            vector<int>sub;
            for(auto it=mp.begin(); it!=mp.end();it++){
                if(mp[it->first]!=0){
                    sub.push_back(it->first);
                    mp[(it->first)]--;
                }
            }
            ans.push_back(sub);
        }
        return ans;
    }
};
