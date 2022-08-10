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
        if(n==1)cout<<1<<nn;
        else{
                vector<int>v;
                for(int i=1;i<=n;i++){
                    v.pb(i);
                }
               for(int i=1;i<v.size();i+=2) {
                swap(v[i-1],v[i]);
               }
               if(n%2!=0){
                swap(v[v.size()-1],v[v.size()-2]);
               }
               for(auto &x: v)cout<<x<<" ";
               cout<<nn;
        }
    }

    return 0;
}

