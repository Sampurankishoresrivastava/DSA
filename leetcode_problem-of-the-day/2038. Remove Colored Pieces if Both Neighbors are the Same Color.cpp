class Solution {
public:
    bool winnerOfGame(string colors) {
        int countA=0;
        int countB=0;
        if(colors.size()<3){
            return false;
        }
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i]=='A'){
                if(colors[i-1]=='A' && colors[i+1]=='A'){
                    countA++;
                }
            }
            else if(colors[i]=='B'){
                if(colors[i-1]=='B' && colors[i+1]=='B'){
                    countB++;
                }
            }
        }
        if(countA>countB){
            return true;
        }
        return false;
    }
};
