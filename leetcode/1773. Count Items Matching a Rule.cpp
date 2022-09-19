class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(ruleKey== "type" and items[i][0]==ruleValue){
                count++;
            }
            else if(ruleKey== "color" and items[i][1]==ruleValue){
                count++;
            }
            else if(ruleKey== "name" and items[i][2]==ruleValue){
                count++;
            }
        }
        return count;
    }
};
