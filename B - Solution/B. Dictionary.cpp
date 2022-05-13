#include<bits/stdc++.h>
#define ll   long long
#define pb   push_back
#define ull  unsigned long long
#define mod  1000000007
#define nn   "\n"
#define yes  cout<<"YES\n"
#define no   cout<<"NO\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vector<string>v;
void solve()
{
    int c=0;
    for(int i=1;i<27;i++)
    {
        for(int j=1;j<27;j++)
        {
            if(i!=j) {
                char ch='a'-1+i;
                char ch1='a'-1+j;
                auto ans=string(1,ch) + ch1;
                v.pb(ans);
            }
        }
    }
}
int main()
{
    fast;
    solve();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==s){
                ans=i;
                break;
            }
        }
        cout<<ans+1<<nn;
    }
    return 0;
}

