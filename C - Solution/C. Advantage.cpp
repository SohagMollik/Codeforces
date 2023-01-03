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
        int a[n],b[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n,greater<int>());
        vector<int>v;
        for(int i=0;i<n;++i){
            if(b[i]==a[0])v.pb(b[i]-a[1]);
           else if(b[i]==a[1])v.pb(b[i]-a[0]);
            else v.pb(b[i]-a[0]);
        }
        for(auto &z: v)cout<<z<<" ";
        cout<<nn;
    }

    return 0;
}

