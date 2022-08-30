// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        while(t--){
            if(s[i]=='B' and s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
            }
        }
    }
    cout<<s<<endl;
    cout<<6567887<<endl;
    return 0;
}