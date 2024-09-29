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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }

    int res=0,ans=0;
    for(int i=0;i<n;++i){

        if(a[i]>=k){
           res+=a[i];
        }
        else if(a[i]==0){
            if(res!=0){
                ++ans;
                --res;
            }
        }
     }

    cout<<ans<<nn;
   }


   return 0;
}
