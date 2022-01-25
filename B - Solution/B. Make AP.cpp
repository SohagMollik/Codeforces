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
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((((a+c)%(2*b)==0)&&((a+c)/(2*b)>0))||(((2*b-a)%(c)==0)&&((2*b-a)/(c)>0))||(((2*b-c)%(a)==0)&&((2*b-c)/(a)>0)))
       cout<<"YES\n";
       else cout<<"NO\n";
    }

    return 0;
}
