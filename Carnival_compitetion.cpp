#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int b=n-m;
        vector<int> one(m);
        vector<int> two(b);
        vector<int> three(b);
        vector<int> four(m);
        int sumo=0,sumt=0,sumth=0,sumf=0;
        for(int i=0;i<m;i++){
            one[i]=a[i];
            sumo=sumo+one[i];
        }
        for(int i=0;i<b;i++){
            two[i]=a[i+m];
            sumt=sumt+two[i];
        }
        for(int i=0;i<b;i++){
            three[i]=a[i];
            sumth=sumth+three[i];
        }
        for(int i=0;i<m;i++){
            four[i]=a[i+b];
            sumf=sumf+four[i];
        }
        int dfo=sumt-sumo;
        int dft=sumf-sumth;
        if(dfo>=dft){
            cout<<dfo<<endl;
        }
        else if(dft>dfo){
            cout<<dft<<endl;
        }
    }

    return 0;
}
