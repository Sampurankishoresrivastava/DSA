#include <bits/stdc++.h>

using namespace std;

int findMin(string s){
    int count=0, ans=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]>s[i+1]){
            count=count+2;
            i++;
        }
        ans=ans+count;
        count=0;
    }
    return ans;
}

int main()
{
    string c;
    cin>>c;
    int a= findMin(c);
    cout<<a<<endl;
    return 0;
}
