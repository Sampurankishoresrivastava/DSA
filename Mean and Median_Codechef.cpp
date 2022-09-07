#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int c=((3*x)-(2*y));
	    cout<<min(c,y)<<" "<<y<<" "<<max(c,y)<<endl;
	}
	return 0;
}
