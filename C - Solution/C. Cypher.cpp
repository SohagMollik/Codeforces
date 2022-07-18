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
        vector<int>v(n);
        for(int i=0;i<n;++i)cin>>v[i];
        for(int i=0;i<n;++i){
            int x;
            string st;
            cin>>x>>st;
            for(int j=0;j<x;++j){
                if(st[j]=='U'){
                    v[i]--;
                    if(v[i]<0)v[i]=9;
                }
                else{
                    v[i]++;
                    if(v[i]>9)v[i]=0;
                }
            }
        }
        for(auto &y: v)cout<<y<<" ";
        cout<<nn;
    }

    return 0;
}

