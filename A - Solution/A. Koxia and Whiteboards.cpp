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
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        for(int i=0;i<n;++i)cin>>a[i];
        for(int i=0;i<m;++i){
            int x;
            cin>>x;
            int idx=min_element(a.begin(),a.end())-a.begin();
            a[idx]=x;
        }
        ll sum=0;
       for(auto &y: a){
        sum+=y;
       }
       cout<<sum<<nn;

    }

    return 0;
}

