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
        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n%2==0)
        {
            int sum=0;
            for(int i=0; i<n/2; ++i)
            {
                sum+=(a[n-i-1]-a[i]);
            }
            cout<<sum<<nn;
        }
        else
        {
            if(n==1)cout<<0<<nn;
            else{
            int sum=0;
            for(int i=0; i<n/2-1; ++i)
            {
                sum+=(a[n-i-1]-a[i]);
            }
            sum+=a[n-(n/2-1)-1]-a[n/2-1];
            cout<<sum<<nn;
            }
        }
    }

    return 0;
}


