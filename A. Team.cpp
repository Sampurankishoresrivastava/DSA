#include <bits/stdc++.h>

using namespace std;

int
main ()
{
    int n, countOne=0,countAns=0;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                countOne++;
            }
        }
        if(countOne==2 || countOne==3){
            countAns++;
        }
        countOne=0;
    }
    cout <<countAns<<endl;
  return 0;
}
