#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1&&a[0]==0)cout<<"0.000000000000"<<endl;
    else{
    double mx=a[0];
    for(i=0;i<n;i++){
        if(a[i]>=mx)mx=a[i];
    }

    double sum=0.0,div;
    for(i=0;i<n;i++){
       div=(double)(a[i]/mx);
       sum+=div;
    }
    cout<<setprecision(12)<<fixed<<((sum*mx)/n)<<endl;
}
}
