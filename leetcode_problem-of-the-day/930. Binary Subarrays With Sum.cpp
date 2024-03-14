class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0;
        int n=nums.size();
        int sum=0;
        vector<int> sumindex(n,-1);

        if (goal == 0) {
            int zeros = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    zeros++;
                } else {
                    count += (zeros * (zeros + 1)) / 2;
                    zeros = 0;
                }
            }
            count += (zeros * (zeros + 1)) / 2;
            return count;
        }

        for(int i=0;i<n;i++){
            sum=nums[i];
            if (sum == goal) {
                count++;
            }
            for(int j=i+1;j<n;j++){
                sum+=nums[j];
                if(sum==goal){
                    sumindex[i]=j;
                    count++;
                    break;
                }
            }
        }

        for(int i=0;i<n;i++){
            if(sumindex[i]!=-1){
                int a=sumindex[i];
                for(int j=a+1;j<n;j++){
                    if(nums[j]==0){
                        count++;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        return count;
    }
};
