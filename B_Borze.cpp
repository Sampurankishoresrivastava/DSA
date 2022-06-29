/* Online C++ Compiler and Editor */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   string a="";
   for(int i =0; i<s.size();i++){
       if(s[i]=='.'){
       a=a+'0';
    }
    else if(s[i]=='-'){
        if(s[i+1]=='.'){
            a=a+'1';
            i++;
        }
        else if(s[i+1]=='-'){
            a=a+'2';
            i++;
        }
    }
   }
   cout<<a<<endl;
   return 0;
}
