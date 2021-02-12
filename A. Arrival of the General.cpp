#include<bits/stdc++.h>
using namespace std;
int x,y;
int main()
{
 int n;
 cin>>n;
 int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>a[x])x=i;
    else if(a[i]<=a[y])y=i;
  }
  cout<<n-y-1+x-(x>y)<<endl;
}
