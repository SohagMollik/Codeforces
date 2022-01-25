#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<ll>());
        ll x=a[0]+a[1];
       if(h%x==0)cout<<(2*(h/x))<<endl;
       else if((h%x)<=a[0])cout<<(2*(h/x)+1)<<endl;
       else cout<<(2*(h/x)+2)<<endl;

    }

    return 0;
}
