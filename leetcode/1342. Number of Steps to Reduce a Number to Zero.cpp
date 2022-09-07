class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while(num>0){
            if (num % 2 != 0){
                num--;
                // ans++;
            }
            else{
                num =num/2;
                // ans++;
            }
            ans++;
        }
        return ans;
    }
};
