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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int len=v.size();
    int mx_beauty=v[len-1]-v[0];
    ll a=0,b=0;
    for(int i=0;i<n;i++){
     if(v[0]==v[i])a++;
     else if(v[len-1]==v[i])b++;
    }
    if(v[0]==v[len-1])
    {
        ll xx=((n*(n-1))/2);
        cout<<mx_beauty<<" "<<xx<<endl;
    }
   else cout<<mx_beauty<<" "<<a*b<<endl;
    return 0;
}
