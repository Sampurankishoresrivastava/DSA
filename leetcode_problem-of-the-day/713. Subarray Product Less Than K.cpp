class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int count=0;

        if(k==0){
            return 0;
        }
        int pro=1;

        for(int i=0;i<nums.size();i++){
            // int pro=1;
            // if(nums[i]<k){
            //     count++;
            //     pro=nums[i];
            // }
            // else if(nums[i]>k){
            //     continue;
            // }
            for(int j=i;j<nums.size();j++){
                if(pro*nums[j]<k){
                    count++;
                    pro=pro*nums[j];
                }
                else if(pro*nums[j]>=k){
                    pro=1;
                    break;
                }
            }
            pro=1;
        }
        return count;
    }
};
