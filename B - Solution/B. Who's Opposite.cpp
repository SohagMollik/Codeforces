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
        int a,b,c;
        cin>>a>>b>>c;
        if(abs(a-b)==1)cout<<-1<<endl;
        else{
            int n=2*abs(a-b);
            if(c>n||a>n||b>n)cout<<-1<<endl;
            else{
                    int d1=c+n/2;
                    int d2=c-n/2;
                    if(d1<=n)
                        cout<<d1<<endl;
                    else
                        cout<<d2<<endl;
            }
        }
    }

    return 0;
}
