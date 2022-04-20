#include<bits/stdc++.h>
#define ll   long long
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  cout<<"YES\n"
#define no   cout<<"NO\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
        if(a==0&&b==0&&c==0)cout<<"1 1 1\n";
        else
        cout<<max(0,max(b,c)+1-a)<<" "<<max(0,max(a,c)+1-b)<<" "<<max(0,max(a,b)+1-c)<<nn;
    }

    return 0;
}

