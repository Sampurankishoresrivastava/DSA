class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m=0,h=0;
        for(int i=0;i<gain.size();i++){
            h=h+gain[i];
            m=max(m,h);
        }
        return m;
    }
};
