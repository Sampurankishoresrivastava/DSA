#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,m,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        sum=sum+m;
    }
    int p=(sum%(n+1));
    for(int i=0;i<5;i++){
        p=p+1;
        if(p>n+1){
            p=1;
        }
        else if(p!=1){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
