#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    int t=a[0][1];
    int max=a[0][1];
    for(int i=1;i<n-1;i++){
        
        t=(t-a[i][0])+a[i][1];
        if(t>=max){
            max=t;
        }
    }
    cout<<max<<endl;
    return 0;
}
