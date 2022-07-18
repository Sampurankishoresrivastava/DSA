#include <iostream>

using namespace std;

int main()
{
    int n, countOne=0, countTwo=0, countThree=0, countFour=0;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<1;j++){
            if(a[i][j]==0){
                countOne++;            
            }
            else if(a[i][j]==1){
                countThree++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<2;j++){
            if(a[i][j]==0){
                countTwo++;            
            }
            else if(a[i][j]==1){
                countFour++;
            }
        }
    }
    if(countOne<countTwo){
        cout<<countFour+countOne<<endl;
    }
    else if(countTwo<countOne){
        cout<<countTwo+countThree<<endl;
    }
    return 0;
}
