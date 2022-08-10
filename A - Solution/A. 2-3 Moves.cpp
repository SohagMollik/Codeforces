#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
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
        int n,temp;
        cin>>n;
        if(n==1)cout<<2<<nn;
       else if(n%3==0)cout<<n/3<<nn;
        else {
            int mod=n%3;
            if(mod==2)
                cout<<((n+1)/3)<<nn;
            else
                cout<<((n+2)/3)<<nn;
        }
    }

    return 0;
}

