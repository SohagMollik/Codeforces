#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n,k=0,i;
    cin>>n;
    int a[n];
    for(i=1;i<n;i++){
       a[k]=pow(2,i);
       k++;
    }
    int sum=a[k-1]*2;
    for(int j=0;j<n/2-1;j++){
        sum+=a[j];
    }
    int sum1=0,ok=n/2;
    for(int x=ok-1;x<=k-1;x++){
        sum1+=a[x];
    }
   cout<<abs(sum1-sum)<<endl;
}
}
