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
    if(n==0)cout<<1<<endl;
    else if(n%4==0)cout<<6<<endl;
    else if(n%4==1)cout<<8<<endl;
    else if(n%4==2)cout<<4<<endl;
    else if(n%4==3)cout<<2<<endl;

    return 0;
}
