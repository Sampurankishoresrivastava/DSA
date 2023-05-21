class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        int count=0;
        sort(chairs.begin(),chairs.end());
        sort(passengers.begin(),passengers.end());
        for(int i=0;i<n;i++){
            count=count+abs(chairs[i]-passengers[i]);
        }
        return count;
    }
};
