class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans[nums[i]]++;
            }
        }
        int res=-1, count=0;
        for(auto it: ans){
            if(it.second>count){
                res=it.first;
                count=it.second;
            }
        }
        return res;
    }
};
