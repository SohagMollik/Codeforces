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
    int n,m,x=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0)x++;
    }
    sort(a,a+n);
   if(x>m){
        int ans=0;
    for(int i=0;i<m;i++){
        ans+=a[i];
    }
     cout<<abs(ans)<<endl;
   }
   else if(x==0)cout<<0<<endl;
   else{
    int ans=0;
    for(int i=0;i<x;i++){
        ans+=a[i];
    }
     cout<<abs(ans)<<endl;
   }


    return 0;
}
