#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    double sum=0.0,ans=0.0;
    for(int i=0; i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}
