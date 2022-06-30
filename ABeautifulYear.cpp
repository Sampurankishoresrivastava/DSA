#include <iostream>

using namespace std;

int main()
{
    
    int y,a,b,c,d,ans;
    cin>>y;
    while(1){
        y++;
        ans=y;
        a=y%10;
        y=y/10;
        b=y%10;
        y=y/10;
        c=y%10;
        y=y/10;
        d=y%10;
        if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
            cout<<ans;
            break;
        }
        y=ans;
    }

    return 0;
}
