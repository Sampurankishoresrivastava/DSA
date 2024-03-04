class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(),tokens.end());
        int left=0,right=tokens.size()-1;
        int curscore=0;
        int maxscore=0;

        while(left<=right){
            if(power>= tokens[left]){
                curscore++;
                power=power-tokens[left];
                left++;
            }
            else{
                curscore--;
                power=power+tokens[right];
                right--;
            }
            if(curscore<0){
                break;
            }
            maxscore=max(maxscore,curscore);
        }

        return maxscore;
    }
};
