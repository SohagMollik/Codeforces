#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
       long long int ans=0,ans1=0;
         for(int i=1;i<n;i++){
            ans+=abs(a[i]-a[i-1]);
        }
        for(int i=1;i<n;i++){
            ans1+=abs(b[i]-b[i-1]);
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i])swap(a[i],b[i]);
        }
        long long int sum=0,sum1=0;
        for(int i=1;i<n;i++){
            sum+=abs(a[i]-a[i-1]);
        }
        for(int i=1;i<n;i++){
            sum1+=abs(b[i]-b[i-1]);
        }
        cout<<min(sum+sum1,ans+ans1)<<"\n";
    }

    return 0;
}
