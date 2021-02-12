#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n;
  cin>>n;
  ll a[n],sum=0,i;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
        sum+=a[i];
  }
  cout<<abs(sum)<<endl;
}
