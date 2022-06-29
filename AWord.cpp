// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int uc=0, lc=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' and s[i]<='Z'){
            uc++;
        }
        else if(s[i]>='a' and s[i]<='z'){
            lc++;
        }
        // cout<<uc<<" "<<lc<<endl;
    }
    if(uc>lc){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else if(lc>uc){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout <<s<< endl;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout <<s<< endl;
    }
    return 0;
}
