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
    int x,y;
    cin>>x>>y;
    int mx=7-max(x,y);
    if(0>mx)cout<<"0/1\n";
    else {
        int gcd=__gcd(min(mx,6),max(mx,6));
            cout<<mx/gcd<<"/"<<6/gcd<<endl;
    }

    return 0;
}
