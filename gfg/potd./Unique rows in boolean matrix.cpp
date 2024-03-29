class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        vector<vector<int>>ans;
        unordered_set <long long> s;
        
        for(int i=0;i<row;i++)
        {
            long long val = 0;
            vector<int>temp;
            for(int j=0;j<col;j++)
            {
                temp.push_back(M[i][j]);
                val = 2*val + M[i][j];
            }
            if(s.find(val) == s.end())
            {
                s.insert(val);
                ans.push_back(temp);
            }
            
        }
        return ans;
    }
};
