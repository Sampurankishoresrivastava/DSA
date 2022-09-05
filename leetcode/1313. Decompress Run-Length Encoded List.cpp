class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int f,v;
        for(int i=0;i<n;i=i+2){
            f=nums[i];
            v=nums[i+1];
            ans.insert(end(ans),f,v);
        }
        return ans;
    }
};
