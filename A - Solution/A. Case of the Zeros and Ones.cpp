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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')one++;
        else zero++;
    }
    if(one==zero)cout<<0<<endl;
    else if(one>zero)cout<<n-(2*zero)<<endl;
    else cout<<n-(2*one)<<endl;
    return 0;
}
