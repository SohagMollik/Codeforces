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
    int n;
    cin>>n;
    bool ans=false;
  while(n--){
    int a,b;
    cin>>a>>b;
  if(a!=b)ans=true;
  }
    if(ans)cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";
    return 0;
}
