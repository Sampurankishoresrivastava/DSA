// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i=0;i<s.size();i++){
            if(s[i]=='B' and s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
