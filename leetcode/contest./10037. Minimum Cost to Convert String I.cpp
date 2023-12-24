class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        
        if (source.size() != target.size()){
            return -1;
        }
        
        int n=original.size();

        vector<vector<long long>> d(26, vector<long long>(26, 1e12));
        for (int i=0;i<26;++i){
            d[i][i] = 0;
        }

        for (int i=0;i<n;++i) {
            d[original[i]- 'a'][changed[i]- 'a'] = min(d[original[i] - 'a'][changed[i] - 'a'], static_cast<long long>(cost[i]));
        }

        for (int k=0;k<26;++k) {
            for (int i=0;i<26;++i) {
                for (int j=0;j<26;++j) {
                    if (d[i][k]== 1e12 || d[k][j] == 1e12){
                        continue;
                    }
                    d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
                }
            }
        }

        long long ans =0;
        int m = source.size();

        for (int i=0;i<m;++i) {
            long long diff = d[source[i] - 'a'][target[i] - 'a'];
            if (diff == 1e12) {
                return -1; 
            }
            ans += diff;
        }

        return ans;
    }
};
