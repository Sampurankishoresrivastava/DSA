#include <iostream>

using namespace std;

int main()
{
    int n,s,l,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]<a[1]){
        count++;
        s=a[0];
        l=a[1];
    }
    else if(a[0]>a[1]){
        count++;
        s=a[1];
        l=a[0];
    }
    for(int i=2;i<n;i++){
        if(a[i]>l){
            count++;
            l=a[i];
        }
        else if(a[i]<s){
            count++;
            s=a[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
