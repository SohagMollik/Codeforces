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
        int mx=0,idx;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=mx){
                mx=a[i];
                idx=i;
            }
        }

            int ans=0,flag=0;
            for(int i=idx-1;i>=0;i--){
                if(a[i]>a[i+1]){
                    ans=1;
                    break;
                }
            }

            for(int i=idx+1;i<n;++i){
                if(a[i]>a[i-1]){
                flag=1;
                break;
                }
            }

        if(ans==1 || flag==1)no
        else yes
    }

    return 0;
}

