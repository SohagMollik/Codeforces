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
        int x,n,m;
        cin>>x>>n>>m;
        for(int i=0;i<n;i++){
            if(x>10)x=x/2+10;
            else
              break;
        }
      for(int i=0;i<m;i++){
        x-=10;
      }
        if(x<=0)
        cout<<"YES"<<endl;
        else cout<<"NO\n";

    }

    return 0;
}
