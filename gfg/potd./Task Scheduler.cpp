class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        vector<int> v(26);
        for(char c : tasks) v[c - 'A']++;
        
        sort(v.begin(), v.end(), greater<int>());
        
        int ans = 0;
        for(int i=0; i<26; i++) {
            if(!v[i]) break;
            ans = max(ans, i + 1 + ((K + 1) * (v[i] - 1)));
        }
        return max(ans, N);
    }
};
