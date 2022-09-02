class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        int r=sentences.size();
        // int c=sentences[0].size();
        for(int i=0;i<r;i++){
            int w=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    w++;
                }
            }
            ans=max(ans, w);
        }
        return (ans+1);
    }
};
