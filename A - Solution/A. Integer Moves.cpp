#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define nn "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==0&&y==0)cout<<0<<nn;
        else{
        int xx=((x-0)*(x-0)+(y-0)*(y-0));
        int z=sqrt(xx);
        if(z*z==xx)cout<<1<<nn;
        else cout<<2<<nn;
        }
    }

    return 0;
}
