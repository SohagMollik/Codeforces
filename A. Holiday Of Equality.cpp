#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<ll>s;
set<ll>::iterator it;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    if(n==1)cout<<0<<endl;
    else{
        for(ll i=0;i<n;i++){
          int x=a[i];
          s.insert(x);
        }

    ll sum=0;
    for(it=s.begin();it!=s.end();it++){
        sum+=*it;
    }
    cout<<sum<<endl;
    }
}

