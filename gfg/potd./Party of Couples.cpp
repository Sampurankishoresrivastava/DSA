//User function Template for C++

class Solution{
    public:
    int findSingle(int n, int arr[]){
        // code here
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i] == arr[i+1]){
                i++;
             }

            else{
                return arr[i];
            }
            if(i==n-1){
                return arr[n-1];
            }
        }
    }
};
