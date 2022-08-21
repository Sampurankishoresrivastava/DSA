#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n-1;i++){
	        cin>>a[i];
	    }
	    int total=(n)*(n+1)/2;
	    for (int i = 0; i < n-1; i++){
	        total = total-a[i];
	    }
	    cout<<total<<endl;
	}
	return 0;
}
