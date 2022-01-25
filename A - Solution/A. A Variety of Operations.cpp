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
    while(t--){
        int c,d;
        cin>>c>>d;
        int dif=abs(c-d);
        if(c==0&&d==0)cout<<0<<endl;
        else if(c==d)cout<<1<<endl;
        else if(dif&1)cout<<-1<<endl;
        else cout<<2<<endl;
    }

    return 0;
}
