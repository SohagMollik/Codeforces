#include<bits/stdc++.h>
using namespace std;
int mian ()
{
  int n,temp;
  cin>>n;
  while(n!=0){
    temp=n%10;
    n/=10;
  }
  if(temp%2==0)
    cout<<"EVEN"<<endl;
 else
    cout<<"ODD"<<endl;
}

