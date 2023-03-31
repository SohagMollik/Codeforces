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
    while(t--){
        int n,q;
        cin>>n>>q;
        ll v[n],p[n];
        ll sum=0;
        for(int i=0;i<n;++i){
        cin>>v[i];
        sum+=v[i];
        }

        p[0]=v[0];
        for(int i=1;i<n;++i){
            p[i]=p[i-1] + v[i];
        }

        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            ll x;
            if(l!=1){
             x=sum - (p[r-1] - p[l-2]);
            }
            else{
                x=sum - p[r-1] ;
            }
            ll z=(r-l)+1;
            ll w=x+(z*k);
            if(w%2!=0)yes
                else no

        }

    }

    return 0;
}

