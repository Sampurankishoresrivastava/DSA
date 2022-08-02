#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    d=a+b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if(d==c){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
