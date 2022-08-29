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
        int n,i,j,x,y;
        cin>>n;
        if(n==1)cout<<1<<nn;
       else if(n%2==0){
            for(i=2, j=1; i<=n && j<=n; i+=2 ,j+=2)
                cout<<i<<" "<<j<<" ";
            cout<<nn;
        }
        else{
            cout<<1<<" ";
            for(x=3, y=2; x<=n && y<=n; x+=2, y+=2)
                cout<<x<<" "<<y<<" ";
            cout<<nn;
        }
    }

    return 0;
}
