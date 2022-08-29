#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int c=0;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int r= sum/m;
        c++;
        cout<<"Case #"<<c<<": "<<(sum-(m*r))<<endl;
    }
    return 0;
}
