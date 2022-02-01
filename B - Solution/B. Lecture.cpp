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
    int n,m;
    cin>>n>>m;
    string a,b,c;
    vector<string>v,v1,v2,ans;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v.pb(a);
        v1.pb(b);
    }
    for(int i=0;i<n;i++){
        cin>>c;
        v2.pb(c);
    }

      for(int i=0;i<n;i++){
        for(int j=0;j<v.size();j++){
             if(v2[i]==v[j]){
                if(v[j].size()<=v1[j].size()){
                    string x=v[j];
                    ans.pb(x);
                }
                else{
                    string y=v1[j];
                    ans.pb(y);
                }
             }
        }
      }
      for(auto xx: ans)cout<<xx<<" ";
      cout<<endl;
    return 0;
}
