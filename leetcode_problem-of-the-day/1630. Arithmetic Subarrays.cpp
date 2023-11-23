class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = l.size(), n = nums.size();
        vector<pair<int, int>> arr;
        vector<bool> result;
        
        for(int i=0; i<n; i++)
            arr.push_back({nums[i], i});
        
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<m; i++){
            int prev=INT_MIN, diff=INT_MIN;
            bool isFalse = false;
            for(int j=0; j<n; j++){
                int curdiff = 0;
                if(arr[j].second >= l[i] && arr[j].second <= r[i]){
                    if(prev != INT_MIN){
                        if(diff == INT_MIN)
                            diff = arr[j].first - prev;
                        else{
                            curdiff = arr[j].first - prev;
                            if(diff != curdiff){
                                isFalse = true;
                                result.push_back(false);
                                break;
                            }
                        }
                    }
                    
                    prev = arr[j].first;
                }
            }
            if(!isFalse){
                result.push_back(true);
            }
        }
        return result;
    }
};
