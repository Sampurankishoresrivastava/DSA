class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            vector<int> a=image[i];
            reverse(a.begin(),a.end());
            image[i]=a;
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[i].size();j++){
                if(image[i][j]==1){
                    image[i][j]=0;
                }
                else{
                    image[i][j]=1;
                }
            }
        }
        return image;
    }
};
