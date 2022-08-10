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
    int t,x;
    cin>>t;
    while(t--)
          {
              int arr[4];
                for(int i=0;i<=3;++i){
                    cin>>arr[i];
                }
                x=arr[0];
                //cout<<x<<nn;
                if(arr[x]==0)no
                else if(arr[x]!=0 && arr[arr[x]]==0)no
                else yes
          }

    return 0;
}

