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
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v;
        int zero=0,one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                v.pb(i);
            }
        }
        if(v.size()==1)cout<<0<<nn;
        else{
                int ans=0;
             for(int i=1;i<v.size();i++){
                if(v[i]-v[i-1]==2)ans+=1;
                else if(v[i]-v[i-1]==1)ans+=2;
             }
        cout<<ans<<nn;
        }
    }

    return 0;
}
