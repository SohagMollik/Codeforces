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
        int n,x_max=0,x_min=0,y_max=0,y_min=0;
        cin>>n;
        while(n--){
            int x,y;
            cin>>x>>y;
            x_max=max(x_max,x);
            x_min=min(x_min,x);
            y_max=max(y_max,y);
            y_min=min(y_min,y);
        }
            cout<<2*(x_max + y_max + abs(x_min)+ abs(y_min))<<nn;
    }

    return 0;
}

