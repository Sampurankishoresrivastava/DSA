#include <iostream>

using namespace std;

int main()
{
    int n,t,p,ans;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    t=a[0][1];
    for(int i=1;i<n;i++){
        p=((t+a[i][1])-a[i][0]);
        if(p>t){
            ans=p;
            t=p;
        }
        else if(p<=t){
            ans=t;
        }
    }
    cout<<ans<<endl;
    return 0;
}
