class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int l=nums.size();
        vector<int> ans(2*l);
        for(int i=0;i<l;i++){
          ans[i]=nums[i];  
        }
        for(int i=0;i<l;i++){
            ans[i+l]=nums[i];
        }
        return ans;
    }
};
