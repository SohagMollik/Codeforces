#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m,sum=0,vis=1;
    cin>>n>>m;
    while(m--){
        ll x;
        cin>>x;
        sum+=(x-vis+n)%n;
        vis=x;
    }
    cout<<sum<<endl;
    return 0;
}
