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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }

        int c=0,mn=INT_MAX;
        for(int i=1;i<n;++i){
            if(a[i]>=a[i-1]){
                c++;
            }
            mn=min(mn,(a[i]-a[i-1]));
        }
        if(c==(n-1))cout<<(mn/2)+1<<nn;
        else cout<<0<<nn;
    }

    return 0;
}

