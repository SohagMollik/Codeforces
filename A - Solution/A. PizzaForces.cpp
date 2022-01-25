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
        ll n;
        cin>>n;
        if(n%2)n++;
        if(n<=6)cout<<15<<endl;
        else
        cout<<5*n/2<<endl;
        }

    return 0;
}
