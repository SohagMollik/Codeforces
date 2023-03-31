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
        vector<int>v(n);
        for(int i=0;i<n;++i)cin>>v[i];
        if(is_sorted(v.begin(),v.end())){
            cout<<0<<nn;
            continue;
        }
        else{
            int c=0;
            for(int i=0;i<n;++i){
                if(v[i]==c+1)c++;
            }
            int sub=n-c;
            cout<<(sub+k-1)/k<<nn;

        }
    }

    return 0;
}

