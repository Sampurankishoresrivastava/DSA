class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            for(int j=0;j<temp.size();j++){
                if(temp[j]==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        
        return ans;
    }
};
