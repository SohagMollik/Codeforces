#include<bits/stdc++.h>
#define ll   long long
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  cout<<"YES\n"
#define no   cout<<"NO\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
        int ans=INT_MAX;
        string ss[n];
        for(int ii=0;ii<n;ii++){
        cin>>ss[ii];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int temp=0;
                for(int k=0;k<m;k++)
                {
                    temp+=abs(ss[i][k]-ss[j][k]);
                }
                ans=min(ans,temp);
            }
        }
    cout<<ans<<nn;
    }
    return 0;
}
