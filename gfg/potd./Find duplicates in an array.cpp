class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
       sort(arr,arr+n);
        vector<int>v;
        int j=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
              if(j==0 || v.back()!=arr[i]){
                  v.push_back(arr[i]);
                  j++;
              }
            }
        }
        if(v.size()==0)v.push_back(-1);
        return v;
    }
};
