class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans_collect=0;
        int last_m=0,last_p=0,last_g=0;
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='M'){
                    last_m=i;
                }
                else if(garbage[i][j]=='G'){
                    last_g=i;
                }
                else{
                    last_p=i;
                }
                ans_collect++;
            }
        }
        int total=ans_collect;
        int sum=0;
        for(int k=0;k<travel.size();k++){
            sum+=travel[k];
            if(last_g==k+1){
                total+=sum;
            }
            if(last_p==k+1){
                total+=sum;
            }
            if(last_m==k+1){
                total+=sum;
            }
        }
        return total;
    }
};
