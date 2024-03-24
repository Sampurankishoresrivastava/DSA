class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> num=nums;
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
                break;
            }
        }
        return ans;
        unordered_map<int,int> count;
        for(int it: nums){
            count[it]++;
        }
        for(auto it: count){
            if(it.second >=2){
                return it.first;
            }
        }
        return -1;
    }
};
