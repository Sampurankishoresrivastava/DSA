#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y<x){
	        cout<<y<<endl;
	    }
	    else if(x<=y){
	        cout<<x<<endl;
	    }
	}
	return 0;
}
