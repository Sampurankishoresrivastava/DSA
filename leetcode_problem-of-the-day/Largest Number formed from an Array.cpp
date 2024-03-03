//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	static bool cmp(string X , string Y){
        string XY = X+Y; 
        string YX = Y+X;
        return (XY > YX);
    }
    
	string printLargest(int n, vector<string> &arr) {
	    // code here
	    sort(arr.begin(),arr.end(),cmp);
	    
	    string ans="";
	    for(int i=0;i<n;i++){
	        ans+=arr[i];
	    }
	    
	    return ans;
	}
};
