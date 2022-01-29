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
    int n,t;
    cin>>n>>t;
    int a[n-1];
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    int x=1;
    while(x<t){
        x+=a[x];
    }
    if(x==t)cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
