class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int>v1;
        sort(arr,arr+n);
        reverse(arr,arr+n);
        
        for(int i=0;i<k;i++){
            v1.push_back(arr[i]);
        }
           return v1;
	}

};
