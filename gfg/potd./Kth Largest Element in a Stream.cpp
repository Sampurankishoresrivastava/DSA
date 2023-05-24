class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
        long long sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        while(1>0){
            if(sum % N == 0){
                return N;
            }
            N--;
        }
    }
};
