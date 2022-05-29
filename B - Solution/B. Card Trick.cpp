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
    while(t--)
    {
        int n,m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)cin>>b[i];
        ll sum=0;
        int ans;
        for(int i=0;i<m;i++){
            sum+=b[i];
            ans=sum%n;
        }
        cout<<a[ans]<<nn;
    }

    return 0;
}

