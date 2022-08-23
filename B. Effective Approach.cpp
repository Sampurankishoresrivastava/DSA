#include <iostream>
using namespace std;
int main()
{
    int n,num,ans1=0,ans2=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>num;
        arr[num]=i+1;
    }
    int m,a;
    cin>>m;
    while(m--){
       cin>>a; 
       ans1=ans1+arr[a];
       ans2=ans2+n-arr[a] +1;
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}
