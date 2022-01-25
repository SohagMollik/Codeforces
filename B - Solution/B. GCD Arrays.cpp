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
        int l,r,k;
        cin>>l>>r>>k;
        if(l==1&&r==1)cout<<"NO\n";
        else if(l==r&&l>1&&r>1)cout<<"YES\n";
        else {
                int odd;
            if(r%2==0&&  l%2==0)
                 odd=(r-l)/2;
        else odd=(r-l)/2+1;
        if(odd<=k)cout<<"YES\n";
        else cout<<"NO\n";
        }
    }

    return 0;
}
