class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        for(int i=0;i<arr2.size();i++){
            arr1.push_back(arr2[i]);
        }
        
        sort(arr1.begin(),arr1.end());
        
        int n= arr1.size();
        
        return arr1[(n/2) -1] + arr1[n/2];
    }
};
