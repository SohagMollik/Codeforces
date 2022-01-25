#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<k)
            sum+=1;
        else if(a[i]%k!=0)
            sum+=(a[i]/k)+1;
        else if(a[i]%k==0)
            sum+=(a[i]/k);
    }
    cout<<sum;
}
