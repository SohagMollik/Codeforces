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
vector<int>v;
void solve()
{
    for(int i=1;i<=1668;i++){
        if(i%3!=0 && i%10!=3)v.pb(i);
    }
}
int main()
{

    fast;
    solve();
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
       cout<<v[k-1]<<endl;
    }
    return 0;
}
