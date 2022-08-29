#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int c=0;
    while(t--){
        int n,count=0,max=-1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            count=1;
        }
        else{
            for(int i=0;i<n-1;i++){
                if(a[i]>max){
                    max=a[i];
                    if(a[i]>a[i+1]){
                        count++;
                    }
                }
            }
            if(a[n-1]>max){
                count++;
            }
        }
        c++;
        cout<<"Case #"<<c<<": "<<count<<endl;
    }
    return 0;
    
}
