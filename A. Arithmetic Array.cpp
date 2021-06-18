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
    int t;
    cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
     int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==n)cout<<0<<endl;
    else if(sum>n)cout<<sum-n<<endl;
    else
     cout<<1<<endl;
    }


    return 0;
}
