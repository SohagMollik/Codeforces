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
        int p;
        cin>>p;
        if(p%2==0){
            cout<<2<<" "<<p/2<<endl;
        }
        else{
            cout<<2<<" "<<2*(p/2)<<endl;
        }
    }

    return 0;
}
