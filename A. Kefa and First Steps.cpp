#include<bits/stdc++.h>
using namespace std;
int y,z,a;
int main()
{
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    if(x>=a)y++;
    else y=1;
    if(y>=z)z=y;
    a=x;
  }
  cout<<z<<endl;
}
