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
        int a[n];
        ll sum=0,even=0,odd=0;
        for(int i=0;i<n;++i){
                cin>>a[i];
                sum+=a[i];
                if(a[i]%2==0)even++;
                else odd++;
        }
        while(q--){
            ll type,value;
            cin>>type>>value;
            if(type==0){
               sum+=(even*value);
               if(value%2!=0){
                odd=odd+even;
                even=0;
               }
                cout<<sum<<nn;
            }
            else{
              sum+=(odd*value);
              if(value%2!=0){
                even=odd+even;
                odd=0;
              }
                cout<<sum<<nn;
            }
        }

    }

    return 0;
}

