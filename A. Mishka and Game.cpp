#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int c=0,d=0;
  while(n--){
    int x,y;
    cin>>x>>y;
    if(x>y)c++;
    if(x<y)d++;
  }
  if(c>d)cout<<"Mishka\n";
  else if(d>c)cout<<"Chris\n";
  else cout<<"Friendship is magic!^^\n";
}
