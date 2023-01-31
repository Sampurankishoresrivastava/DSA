class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans,per(m,1);
        for(int i=0;i<m;i++){
            per[i]=i+1;
        }
        for(int i=0;i<queries.size();i++){
            int position=queries[i];
            int j=0;
            for(int j=0;j<m;j++){
                if(per[j]==position){
                    ans.push_back(j);
                    per.erase(per.begin()+j);
                    per.insert(per.begin(),position);
                }
            }
        }
        return ans;
    }
};
