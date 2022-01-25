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
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
       sort(v.begin(),v.end());
       int ans=0;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(v[i],2*v[j])>1)ans++;
            else if(__gcd(v[i]*2,v[j])>1)ans++;
        }
       }
       cout<<ans<<endl;
    }

    return 0;
}
