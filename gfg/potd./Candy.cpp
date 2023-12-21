
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
    
        vector<int> a(N,1);
        vector<int> b(N,1);

        for(int i=1;i<N;i++){
            if(ratings[i]>ratings[i-1]){
                a[i]=a[i]+a[i-1];
            } 
        }

        for(int i=N-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                b[i]=b[i]+b[i+1];
            }
        }
        vector<int>result(N,1);
        int sum=0;


        for(int i=0;i<N;i++){
            result[i]=max(a[i],b[i]);
            sum=sum+result[i];
        }
        return sum;
        
    }
};
