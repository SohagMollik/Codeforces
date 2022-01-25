#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x=0;
  cin>>n;
  while(n){
    if(n&1)x++;
    n>>=1;
  }
  cout<<x<<endl;
}
