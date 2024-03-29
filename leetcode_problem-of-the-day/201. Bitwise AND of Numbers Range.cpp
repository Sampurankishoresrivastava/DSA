class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=left;

        if(left==0 || right ==0){
            return 0;
        }

        if((int)log2(left)!=(int)log2(right)){
            return 0;
        } 

        // for(int i=left+1;i<=right;i++){
        //     ans&= i;
        // }

        while(left<right){
            ans &= ++left;
        }

        return ans;
    }
};
