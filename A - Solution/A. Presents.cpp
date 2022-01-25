#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
  int n,k;
  cin>>n;
  for(int i=1;i<=n;i++){
      cin>>k;
      a[k]=i;
  }
  for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
