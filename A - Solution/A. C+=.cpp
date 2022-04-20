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
        int a,b,n;
        cin>>a>>b>>n;
        int mx=max(a,b);
        a=a+b;
        int x=a;
        if(x>n){
         cout<<1<<nn;
        }
        else{
            int y=x+mx;
            if(y>n)cout<<2<<nn;
            else{
            int ans=2,temp=-1;
            while(1){
                if(temp>n)break;

                    temp=x+y;
                    x=y;
                    y=temp;
                    ans++;

            }
            cout<<ans<<nn;

            }
        }
    }

    return 0;
}

