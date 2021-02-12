#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a,b;
  cin>>a>>b;
  if(a>b){
    cout<<__gcd(b,a)<<endl;
  }
  else
        cout<<__gcd(a,b)<<endl;
}
