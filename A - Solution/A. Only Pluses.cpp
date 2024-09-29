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
    int a[3];
    for(int i=0;i<3;++i){
        cin>>a[i];
    }

    for(int i=0;i<5;++i){
        sort(a,a+3);
        a[0]++;
    }

    cout<<a[0]*a[1]*a[2]<<nn;
   }
   return 0;
}
