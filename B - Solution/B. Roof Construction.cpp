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
    int p=1;
    while(p*2<n){
        p*=2;
    }
    for(int i=p-1;i>=0;i--)cout<<i<<" ";
    for(int i=p;i<n;i++)cout<<i<<" ";
    cout<<endl;
    }

    return 0;
}
