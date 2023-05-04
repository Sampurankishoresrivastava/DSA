class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0,j=0;
        long long ans=0,sum=0;
        while(j<N){
            sum=sum+Arr[j];
            if(j-i+1<K){
                j++;
            }
            else if(j-i+1==K){
                ans=max(ans,sum);
                sum=sum-Arr[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};
