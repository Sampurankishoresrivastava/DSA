class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        for(int i=0;i<score.size();i++){
            if(i==0){
                ans.push_back("Gold Medal");
            }
            if(i==2){
                ans.push_back("Silver Medal");
            }
            if(i==3){
                ans.push_back("Bronze Medal");
            }
            if(i>3){
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};
