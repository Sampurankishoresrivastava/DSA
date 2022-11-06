class Solution {
public:
    int commonFactors(int a, int b) {
        int count=0;
        if(a>=b){
            for(int i=2;i<=b;i++){
                if(a%i==0 && b%i==0){
                    count++;
                }
            }
        }
        else if(b>a){
            for(int i=2;i<=a;i++){
                if(a%i==0 && b%i==0){
                    count++;
                }
            }
        }
        count++;
        return count;
    }
};
