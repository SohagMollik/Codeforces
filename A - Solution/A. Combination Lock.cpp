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
    int n;
    cin>>n;
    string x,y;
    cin>>x>>y;
    int sum=0;
    for(int i=0;i<n;i++){
        int sub=abs((x[i]-'0')-(y[i]-'0'));
        int mn=min((x[i]-'0'),y[i]-'0');
        int mx=max((x[i]-'0'),y[i]-'0');
        int ans=((10+mn)-mx);
        int lock=min(sub,ans);
        sum+=lock;

    }
    cout<<sum<<endl;
    return 0;
}
