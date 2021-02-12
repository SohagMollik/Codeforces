#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[3],i,b[3];
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    for(i=0;i<3;i++){
        b[i]=a[i];
    }
    sort(a,a+3);
    for(i=0;i<3;i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++){
        cout<<b[i]<<endl;
    }
}
