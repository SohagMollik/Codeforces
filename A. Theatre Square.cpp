#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll ans=((n+a-1)/a)*((m+a-1)/a);
    cout<<ans<<endl;
}

