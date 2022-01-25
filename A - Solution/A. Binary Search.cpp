#include<bits/stdc++.h>
using namespace std;
int main()
{
  /*int n,k;
  cin>>n>>k;
  int a[n],b[k];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<k;i++){
    cin>>b[i];
  }
  bool ans=false;
  for(int i=0;i<k;i++){
   for(int j=0;j<n;j++){
     if(b[i]==a[j])ans=true;
   }
   if(ans==true)cout<<"YES\n";
   else cout<<"NO\n";
  }*/
  long long int n=1099511627776;
  for(long long int i=2;i<=n;i++){
    if(n%i==0)cout<<i<<" ";
  }
  cout<<endl;
}
