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
        int n;
        cin>>n;
        int div=n/3;
        int x=div+1;
        if((3*div)==n)cout<<div<<" "<<div<<endl;
        else if((x*1 + div*2)==n) cout<<x<<" "<<div<<endl;
        else cout<<div<<" "<<x<<endl;
    }

    return 0;
}
