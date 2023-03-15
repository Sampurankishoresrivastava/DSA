class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=1, first=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-first>k){
                count++;
                first=nums[i];
            }
        }
        return count;
    }
};
