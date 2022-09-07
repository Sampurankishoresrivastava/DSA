#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int k;
	    cin>>k;
	    set<int> b;
	    for(int i=0;i<k;i++){
	        int x;
	        cin>>x;
	        b.insert(x);
	    }
	    for(int i=0;i<n;i++){
	        if(b.count(a[i])){
	            continue;
	        }
	        else{
	            cout<<a[i]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
