class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // &&&&&&&&&&&&&This takes O(nlogn) tc&&&&&&&&&&&&&&&&&&&
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=nums[i]*nums[i];
        // }

        // sort(nums.begin(),nums.end());

        // return nums;


        // **********This takes O(nlogn) tc**************
        int n=nums.size();
        int left=0;
        int right=n-1;
        vector<int> ans(n);

        for(int i=n-1;i>=0;i--){
            
            if(abs(nums[left])>nums[right]){
                ans[i]=nums[left]*nums[left];
                left++;
            }

            else{
                ans[i]=nums[right]*nums[right];
                right--;
            }
        }

        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }

        return nums;

    }
};
