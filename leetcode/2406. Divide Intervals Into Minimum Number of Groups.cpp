class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int a[n], b[n];
        for(int i=0;i<n;i++){
            a[i]=intervals[i][0];
            b[i]=intervals[i][1];
        }
        sort(a,a+n);
        sort(b,b+n);
        
        int it=1, ans=1,j=0,i=1;
        while(i<n && j<n){
            if(a[i]<=b[j]){
                it++;
                i++;
            }
            else{
                it--;
                j++;
            }
            ans=max(ans,it);
        }
        return ans;
    }
};
