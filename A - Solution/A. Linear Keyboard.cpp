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
        string x,y;
        cin>>x>>y;
        vector<int>v;
        for(int i=0;i<y.size();i++){
            for(int k=0;k<x.size();k++){
                if(y[i]==x[k])v.pb(k+1);
            }
        }
        int ans=0;
        for(int i=1;i<v.size();i++){
            ans+=abs(v[i]-v[i-1]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
