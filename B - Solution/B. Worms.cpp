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
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int m;
   cin>>m;
   int q[m];
   for(int i=0;i<m;i++){
    cin>>q[i];
   }
   vector<int>v,v1;
   vector<int>::iterator it;
   int x=1,y=a[0];
   v.pb(x);
   v1.pb(y);
    for(int i=1;i<n;i++){
         x+=a[i-1];
         y+=a[i];
         int z=min(x,y);
         int zz=max(x,y);
         v.pb(z);
         v1.pb(zz);
    }

    for(int k=0;k<m;k++){
            int value=q[k];
     it=lower_bound(v1.begin(),v1.end(),value);
     cout<<int(it-v1.begin())+1<<endl;
    }
    return 0;
}
