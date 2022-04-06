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
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0)cout<<1<<nn;
        else if(a!=0&&b==0)cout<<a+1<<nn;
        else if(a==0&&b!=0)cout<<1<<nn;
        else cout<<a+2*b+1<<nn;
    }

    return 0;
}
