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
        int n,x=0,y=0,xx=0,yy=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i+=2)
        {
            if(a[i]%2==0)x++;
            else y++;
        }
        for(int i=1;i<n;i+=2)
        {
            if(a[i]%2==0)xx++;
            else yy++;
        }
        if(((x>=1&&y==0)||(x==0&&y>=1))&&((xx>=1&&yy==0)||(xx==0&&yy>=1)))yes;
        else no;

    }

    return 0;
}

