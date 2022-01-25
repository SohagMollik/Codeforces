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

    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         int ans=0;
         for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i<j && (a[i]*a[j]==i+j))ans++;
            }
         }
         cout<<ans<<endl;
    }
    return 0;
}
