#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m];
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    ll l,r;
    for(int i=1;i<=n;i++){
        cin>>l>>r;
    ll sum=0;
    for(int i=l;i<=r;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
    }
}

