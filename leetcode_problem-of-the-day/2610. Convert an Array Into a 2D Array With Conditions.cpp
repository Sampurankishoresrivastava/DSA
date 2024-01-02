class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<vector<int>> ans;
        int maxi=0;

        for(auto it: nums){
            mp[it]++;
            if(maxi<mp[it]){
                maxi=mp[it];
            }
        }

        for(int i=0;i<maxi;i++){
            vector<int> sub;

            for(auto &it:mp){
                if(it.second>0){
                    sub.push_back(it.first);
                    it.second--;
                }
            }
            ans.push_back(sub);
        }
        return ans;
    }
};
