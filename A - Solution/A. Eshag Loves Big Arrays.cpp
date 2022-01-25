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
int a[105];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      for(int i=0;i<n;i++){
      cin>>a[i];
      }
      sort(a,a+n);
      int x=0;
      for(int i=0;i<n;i++){
        if(a[i]!=a[0])x++;
      }
      cout<<x<<endl;
    }

    return 0;
}
