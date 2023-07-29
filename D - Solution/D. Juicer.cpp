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

    int n,b,d;
    cin>>n>>b>>d;

    int a[n];
    long long sum=0;
    int ans=0;
    for(int i=0;i<n;++i){
        cin>>a[i];
        if(a[i]<=b){
        sum+=(ll)a[i];
        }
        if(sum>d){
        ans++;
        sum=0;
        }
    }

    cout<<ans<<nn;

    return 0;
}

