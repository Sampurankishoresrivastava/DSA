#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<51){
	        cout<<"LEFT"<<endl;
	    }
	    else{
	        cout<<"RIGHT"<<endl;
	    }
	}
	return 0;
}