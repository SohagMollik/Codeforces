#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n,temp,rev=0,t;
  cin>>n;
  temp=n;
  while(n!=0){
    t=n%10;
    rev=rev*10+t;
    n/=10;
  }
  cout<<rev<<endl;
  if(rev==temp){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
}
