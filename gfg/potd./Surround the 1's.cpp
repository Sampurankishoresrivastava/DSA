class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
      
        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                 int c=0;
                if(matrix[i][j]==1)
                {
                    if(i-1>=0 && matrix[i-1][j]==0) c++;//above
                    if(i+1<n && matrix[i+1][j]==0) c++;//below
                    if(j-1>=0 && matrix[i][j-1]==0) c++;//left
                    if(j+1<m && matrix[i][j+1]==0) c++;//right
                    if(i-1>=0 &&j-1>=0 && matrix[i-1][j-1]==0) c++;//dig-a
                    if(i-1>=0 && j+1<m && matrix[i-1][j+1]==0) c++;//dig-b
                    if(i+1<n && j-1>=0 && matrix[i+1][j-1]==0) c++;//dig-c
                    if(i+1<n && j+1<m && matrix[i+1][j+1]==0)  c++;//dig-d
                }
                if(c%2==0 &&c!=0) ans++;
            }
             
            
        }
        return ans;
        
    }
};
