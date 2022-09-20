class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0;
        if(start>goal){
            ans=start-goal;
        }
        else if(start<goal){
            ans=start;
        }
        return ans;
    }
};
