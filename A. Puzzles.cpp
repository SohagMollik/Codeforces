#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,ans=1000;
  cin>>n>>m;
  int a[m];
  for(int i=0;i<m;i++){
    cin>>a[i];
  }
  sort(a,a+m);
  for(int i=0;i<m-n+1;i++){
    if(a[n-1+i]-a[i]<ans)
        ans=a[n-1+i]-a[i];
  }
  cout<<ans;
}
