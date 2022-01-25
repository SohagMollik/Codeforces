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
        int y=n-1;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        ll x=sum-a[0];
         double avg=((double)x/(double)y);
         cout<<setprecision(6)<<fixed<<a[0]+avg<<endl;

    }

    return 0;
}
