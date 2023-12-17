class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        unordered_set<int> s;
        
        int r=0;
        int sum=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(s.find(grid[i][j]) != s.end()){
                    r=grid[i][j];
                }
                else{
                    s.insert(grid[i][j]);
                    sum+=grid[i][j];
                }
            }
        }
        
        int n= grid.size();
        int totalSize=n*n;
        
        vector<int>ans;
        
        ans.push_back(r);
        
        int missing= totalSize*(totalSize+1)/2 -sum;
        
        ans.push_back(missing);
        return ans;
    }
};
