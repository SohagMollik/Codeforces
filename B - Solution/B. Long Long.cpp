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
        int n;
        cin>>n;
        int a[n];
        vector<int>v;
        ll sum=0;
        for(int i=0;i<n;++i){
                cin>>a[i];
                sum+=(ll)(abs(a[i]));

                if(a[i]!=0)v.pb(a[i]);
        }

        int ans=0,ok=0;
        for(int i=0;i<v.size();++i){
            if(v[i]<0){
                ok=1;
            }
            else{
                ans+=ok;
                ok=0;
            }
        }


       cout<<sum<<" "<<ans+ok<<nn;
    }

    return 0;
}

