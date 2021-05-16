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
        int k;
        cin>>k;
        int x=100;
        int gcd=__gcd(k,x);
        gcd=x/gcd;
        cout<<gcd<<endl;
    }

    return 0;
}
