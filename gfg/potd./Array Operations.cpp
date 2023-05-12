class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        // code here
        int count=0, nonZero=0;
        for(int i=0;i<n;i++)
            if(arr[i]==0){
                if(nonZero) //there must exist a subarray
                    count++;
                nonZero=0; // one subarray traversed
            }
            else
                nonZero++;
        if(nonZero==n)
            return -1;
        else if(nonZero)
            count++;
        return count;
    }
};
