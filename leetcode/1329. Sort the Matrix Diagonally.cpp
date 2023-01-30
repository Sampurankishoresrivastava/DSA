class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        //first row
        for(int i=0;i<n;i++){
            int row=0,col=i;
            vector<int>temp;
            while(row<m && col<n){
                temp.push_back(mat[row][col]);
                row++;
                col++;
            }
            sort(temp.begin(),temp.end());
            row=0;
            col=i;
            int ind=0;
            while(row<m && col<n){
                mat[row][col]=temp[ind];
                row++;
                col++;
                ind++;    
            }
    }
        //first col
        for(int j=1;j<m;j++){
            int row=j,col=0;
            vector<int>temp;
            while(row<m && col<n){
                    temp.push_back(mat[row][col]);
                    row++;
                    col++;
                }
            sort(temp.begin(),temp.end());
            row=j;
            col=0;
            int ind=0;
            while(row<m && col<n){
                    mat[row][col]=temp[ind];
                    row++;
                    col++;
                    ind++;    
            }
        }
    return mat;
    }
};
