#include<bits/stdc++.h>
#define nn "\n"
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=998244353;
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int gcd=1;
        if(n&1)gcd=0;
        else{
            for(int i=1;i<=n/2;i++){
            gcd=1LL * gcd * i % mod;
            }
            gcd=1LL * gcd * gcd % mod;
        }
         cout<<gcd<<nn;
    }

    return 0;
}
