#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    read:
    while(t--)
    {
        ll n;
        cin>>n;
            for(int i=2;i*i<=n+1;i++){
                if(n%i==0){
                    ll x=n/i;
                    cout<<x<<" "<<n-x<<endl;
                    goto read;
                }
            }
            cout<<1<<" "<<n-1<<endl;
    }
}
