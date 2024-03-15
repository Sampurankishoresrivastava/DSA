class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        int count=0;
        int zeroIndex = -1;

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
                zeroIndex = i;
            }
        }

        if(count>1){
            vector<int> aa(n,0);
            return aa;
        }

        if(count==1){
            vector<int> res(n,0);
           int product = 1;
            for (int i = 0; i < n; i++) {
                if (i != zeroIndex) {
                    product *= nums[i];
                }
            }
            res[zeroIndex] = product;
            return res;
        }


        vector<int> temp(n);
        temp[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            int a=nums[i];
            temp[i]=temp[i+1]*a;
        }

        vector<int> arr(n);
        arr[0]=nums[0];
        int a=1;
        for(int i=1;i<n;i++){
            a=a*nums[i-1];
            arr[i]=a;
        }

        vector<int> ans(n);
        ans[0]=temp[0]/arr[0];

        for(int i=1;i<n;i++){
            int b=(temp[i]*arr[i])/nums[i];
            ans[i]=b;
        }
        return ans;
    }
};
