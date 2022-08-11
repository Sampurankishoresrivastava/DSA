#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;
    while(n--){
        string a;
        cin>>a;
        for(int i=1;i<a.size()-1;i++){
            if(a[i]=='+'){
                x++;
            }
            else{
                x--;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}
