#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    int m=a[0],c=1;
    for(int i=0;i<n;i++){
        if(m==a[i+1])
        c++;
    }
    cout<<c<<endl;
    if(c%2==0)
        cout<<"Unlucky"<<endl;
    else
        cout<<"Lucky"<<endl;
}
