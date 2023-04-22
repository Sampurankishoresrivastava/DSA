class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int degree=0,res=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
            if(mp[nums[i]].size()>degree)
            {
                res=i-mp[nums[i]][0]+1;
                degree=mp[nums[i]].size();
            }
            if(mp[nums[i]].size()==degree)
            {
                res=min(res,i-mp[nums[i]][0]+1);
            }
        }
        return res;
    }
};
