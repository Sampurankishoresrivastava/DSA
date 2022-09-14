#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,m;
	    cin>>n>>m;
	    long long a[n];
	    long long sum=0;
	    long long mx=m;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	       // sum=sum+max(abs(a[i]-1),abs(a[i]-m));
	    }
	    for(int i=0;i<n;i++){
	        sum+=max(abs(a[i]-1),abs(a[i]-max));
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
