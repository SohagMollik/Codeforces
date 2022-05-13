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
       string s;
        cin>>s;
        int n=s.size();
        if(s.size()==1)cout<<"Bob "<<26-(122-(int(s[0])))<<nn;
        else if(s.size()%2!=0)
        {
            int y=26-(122-int(s[n-1]));
            int x=0,xx=0;
           for(int i=0;i<n-1;i++)
           {
               x+=(26-(122-int(s[i])));
           }
           int yy=26-(122-int(s[0]));
           for(int i=1;i<n;i++)
           {
               xx+=(26-(122-int(s[i])));
           }
           int mx=max(x,xx);
           if(mx==x)
           {
               if(x>y)
               cout<<"Alice "<<x-y<<nn;
               else cout<<"Bob "<<y-x<<nn;
           }
           else
           {
               if(xx>yy)
               cout<<"Alice "<<xx-yy<<nn;
               else cout<<"Bob "<<yy-xx<<nn;
           }
        }
        else
        {
            int ans=0;
            for(int i=0;i<n;i++)
           {
               ans+=(26-(122-int(s[i])));
           }
           cout<<"Alice "<<ans<<nn;
        }
    }

    return 0;
}

