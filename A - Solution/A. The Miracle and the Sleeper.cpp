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
        int l,r;
        cin>>l>>r;
        if(l==r)cout<<r%l<<endl;
        else if(r/2<l)cout<<r%l<<endl;
        else if(r/2>=l){
            int y=r/2+1;
            int z=r%y;
            cout<<z<<endl;

        }
    }

    return 0;
}
