class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans = 0;

        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        
        int maxf=INT_MIN;
        for(auto& it : mp){
            if(it.second > maxf){
                maxf=it.second;
            }
        }

        for(auto& it: mp){
            if(it.second== maxf){
                ans+= maxf;
            }
        }
        return ans;
    }
};
