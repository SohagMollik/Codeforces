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
        ll n;
        cin>>n;
        ll a[n];
        ll plus_sum=0,minus_sum=0;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]<0)minus_sum+=a[i];
            else plus_sum+=a[i];
        }
        cout<<abs(abs(plus_sum) - abs(minus_sum))<<nn;
    }

    return 0;
}
