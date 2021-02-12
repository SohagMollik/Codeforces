#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,x,c=1,n;
   cin>>t>>x;
   t-=1;
   while(t--){
   cin>>n;
  if(x!=n){
    c++;
    x=n;
  }
}
cout<<c;
}

