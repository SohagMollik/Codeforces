#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n");
#define no   printf("NO\n");
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a,b;
        while(n--){
            int x,y;
            cin>>x>>y;
            a.pb(x);
            b.pb(y);
        }
        int mx=0,ans;
        for(int i=0;i<a.size();++i){
            if(a[i]<=10){
                if(b[i]>mx){
                    mx=b[i];
                    ans=i+1;
                }
            }
        }
        cout<<ans<<nn;

    }

    return 0;
}

