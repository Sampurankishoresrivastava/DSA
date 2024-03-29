class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> win,loss;
        unordered_map<int,int> total;
        for(auto it: matches){
            win.insert(it[0]), loss.insert(it[1]), total[it[1]]++;
        }

        vector<int>v1,v2;
        vector<vector<int>>ans;
        for(auto it: win){
            if(total.find(it)==total.end()){
                v1.push_back(it);
            }
        }
        for(auto it: loss){
            if(total[it]==1){
                v2.push_back(it);
            }
        }

        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};
