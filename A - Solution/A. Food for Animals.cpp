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
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(a>=x&&b>=y)yes;
    else{
        if(a>=x&&y>b)
        {
            if((b+c)>=y)yes;
            else no;
        }
        else if(x>a&&b>=y)
        {
            if((a+c)>=x)yes;
            else no;
        }
        else{
            int x_need=abs(x-a);
            int y_need=abs(y-b);
            if((x_need+y_need)<=c)yes;
            else no;
        }
    }
    }
    return 0;
}

