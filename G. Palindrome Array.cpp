#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
  ll n;
  cin>>n;
  ll a[n];
  ll b[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int j=0;j<n;j++){
    b[j]=a[j];
  }
  reverse(a,a+n);
  bool flag=true;
  for(int i=0;i<n;i++){
        if(a[i]!=b[i])
          flag=false;
  }
  if(flag==true)
    cout<<"YES\n";
  else
    cout<<"NO\n";

}
