#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
  int n,l;
  cin>>n>>l;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  if(n>1){
  sort(a,a+n);
  int z;
  for(int i=0;i<n-1;i++){
    z=a[i+1]-a[i];
    v.push_back(z);
  }
  sort(v.begin(),v.end(),greater<int>());
   double x=(double)v[0];
   double w=(double)max((a[0]-0),(l-a[n-1]));
   double y=max(x/2,w);
  cout<<setprecision(9)<<fixed<<y<<endl;
  v.clear();
}
else{
    double x=(double)a[0];
    double w=(double)max((a[0]-0),(l-a[0]));
    double y=max(x/2,w);
    cout<<setprecision(9)<<fixed<<y<<endl;
}
}
