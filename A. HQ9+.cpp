#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  string s;
  cin>>s;
  for(int i=0; i<s.size();i++){
      if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='+'){
          cout<<"Yes"<<endl;
          break;
      }
      else{
          cout<<"No"<<endl;
          break;
      }
      
  }
  return 0;
}
