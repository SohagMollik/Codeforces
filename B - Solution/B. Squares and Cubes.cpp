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
    int test;
    cin>>test;
    while(test--)
    {
       int n;
       cin>>n;
       set<ll>s;
       for(ll i=1;i<=sqrt(n);i++){
        if(i*i<=n)s.insert(i*i);
        if(i*i*i<=n)s.insert(i*i*i);
       }
       cout<<s.size()<<endl;
    }

    return 0;
}
