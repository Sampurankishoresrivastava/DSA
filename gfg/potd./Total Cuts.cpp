class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        vector<int> mimi(N,0);
        mimi[N-1]=A[N-1];
        for(int i=N-2;i>=0;i--){
            mimi[i]=min(mimi[i+1],A[i]);
        }
        int ans=0;
        int maxi=A[0];
        for(int i=1;i<N;i++){
            if(maxi+mimi[i]>=K){
                ans++;
            }
            maxi=max(maxi,A[i]);
        }
        return ans;
    }
};
