class Solution {
public:

    static bool cmp(vector<int> a, vector<int> b){
        return b[1]>a[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);

        int end=points[0][1];
        int count=1;

        for(int i=1;i<points.size();i++){
            if(points[i][0]<=end){
                continue;
            }
            else{
                end=points[i][1];
                count++;
            }
        }

        return count;
    }
};
