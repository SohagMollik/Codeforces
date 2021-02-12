#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       int a[n],b[n],c[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
        c[i]=a[i];
       }
       for(int i=0;i<n;i++){
        cin>>b[i];

       }

   sort(b,b+n,greater<int>());
       for(int i=0;i<k;i++){
        a[i]=b[i];
        b[i]=c[i];
       }

       int sum1=0,sum2=0;
       for(int i=0;i<n;i++){
        sum1+=a[i];
       }
       for(int i=0;i<n;i++){
        sum2+=b[i];
       }
       cout<<max(sum1,sum2)<<endl;

    }
}
