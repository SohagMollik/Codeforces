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
        cin>>n>>m;
        int p=m-1;
        int x=m;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=x;
           x=x+m;
        }

        ll ans=(p*(p+1))/2;
        cout<<sum+ans<<nn;
    }

    return 0;
}

