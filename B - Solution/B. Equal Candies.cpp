#include<bits/stdc++.h>

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
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int mn=a[0];
        long long int ans=0;
        for(int i=0;i<n;i++)
       {
           ans+=(a[i]-mn);
       }
       cout<<ans<<"\n";
    }

    return 0;
}

