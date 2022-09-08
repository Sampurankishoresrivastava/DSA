int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map <int,int> count;
    int maxfreq=0;
    int ans=0;
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
        maxfreq=max(maxfreq,count[arr[i]]);
    }
    for(int i=0;i<n;i++){
        if(maxfreq==count[arr[i]]){
            ans=arr[i];
            break;
        }
    }
    return ans;
}
