#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define nn "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mx=max_element(v.begin(),v.end())-v.begin();
    int mn=min_element(v.begin(),v.end())-v.begin();
    cout<<mn+1<<" "<<mx+1<<nn;
    }
    return 0;
}
