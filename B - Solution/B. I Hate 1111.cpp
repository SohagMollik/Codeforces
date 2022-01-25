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
        int x;
        cin>>x;
        int div=x/11;
        int rem=x%11;
        if(rem==0)cout<<"YES\n";
        else{
            if(rem*10<=div)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }

    return 0;
}
