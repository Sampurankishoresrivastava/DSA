class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int countfive=0,countten=0,counttwenty=0;
        for(int i=0;i<N;i++){
            if(bills[i]==5){
                countfive++;
            }
            else if(bills[i]==10){
                countten++;
                if(countfive>0){
                    countfive--;
                }
                else{
                    return false;
                }
            }
            else if(bills[i]==20){
                counttwenty++;
                if(countfive>0 && countten>0){
                    countfive--;
                    countten--;
                }
                else if(countfive>=3){
                    countfive=countfive-3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
