class Solution {
    void flip(vector<int>& arr, int inx){
        for(int i=0;i<=inx/2;i++){
            int temp= arr[i];
            arr[i]=arr[inx-i];
            arr[inx-i]=temp;
        }
    }
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int>ans;
        for(int i=arr.size()-1;i>0;i--){
            for(int j=0;j<=i;j++){
                if(arr[j]==i+1){
                    flip(arr,j);
                    ans.push_back(j+1);
                    break;
                }
            }
            flip(arr,i);
            ans.push_back(i+1);
        }
        return ans;
    }
};
