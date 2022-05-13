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
        int x,y;
        cin>>x>>y;
        if(x==1&&y==1)cout<<0<<nn;
        else if(x==2&&y==1||x==1&&y==2)cout<<"1\n";
        else if(x==1&&y>1||y==1&&x>1)cout<<"-1\n";
        else cout<<2*max(x,y)-2-(x+y)%2<<nn;
    }
    return 0;
}

