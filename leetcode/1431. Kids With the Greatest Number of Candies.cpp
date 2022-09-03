class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int max=*max_element(candies.begin(), candies.end());
        for(int i=0;i<n;i++){
            candies[i]=candies[i]+extraCandies;
        }
        vector<bool> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=(candies[i]>=max);
        }
        return ans;
    }
};
