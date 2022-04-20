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
    int n;
    cin>>n;
    vector<int>v(12);
    int x=0;
    for(int i=0;i<12;i++)
    {
        cin>>v[i];
        x+=v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    int sum=0,ans=0;
    for(int i=0;i<12;i++)
    {
        if(sum>=n)break;
        else{
            sum+=v[i];
            ans++;
        }
    }
    if(x<n)cout<<-1<<nn;
    else
    cout<<ans<<nn;

    return 0;
}

