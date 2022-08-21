#include <iostream>
using namespace std;
int NextPrime(int n)
{
    int i, j, count, num;
    for (i = n + 1; 1; i++)
    {
        for (j = 2, count = 0; j <= i; j++)
        {
            if (i%j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            return i;
            break;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a=NextPrime(n);
    if(a==m){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
