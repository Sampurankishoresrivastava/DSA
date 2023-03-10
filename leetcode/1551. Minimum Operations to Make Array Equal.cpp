class Solution {
public:
    int minOperations(int n) {
        int ans=0,mid=n/2;
        for(int i=0;i<n;i++){
            ans=ans+(abs(mid-i));
        }

        return ans;
    }
};
