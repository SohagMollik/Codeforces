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

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        set<int>s;
        int vis=0,ans;
        for(int i=n-1;i>=0;i--){
            s.insert(a[i]);
            vis++;
            if(s.size()!=vis){
                ans=i;
                break;
            }
        }
        if(s.size()==n)cout<<0<<nn;
        else cout<<ans+1<<nn;
        s.clear();
    }

    return 0;
}

