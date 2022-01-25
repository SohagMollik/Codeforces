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
    while(t--){
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll mx=max(x,y);
        ll mn=min(x,y);
        if(a+a<=b)cout<<(x+y)*a<<endl;
        else if(a+a>b)cout<<mn*b+(mx-mn)*a<<endl;
    }

    return 0;
}
