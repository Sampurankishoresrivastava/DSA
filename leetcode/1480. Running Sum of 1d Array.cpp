class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int l=nums.size();
        vector <int> ans(l);
        ans=nums;
        for(int i=1;i<l;i++){
            ans[i]=ans[i]+ans[i-1];
        }
        return ans;
    }
};
