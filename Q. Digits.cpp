#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin>>t;
  while(t--){
    long long n,temp;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
    }
    else{
    while(n!=0){
        temp=n%10;
        n/=10;
        cout<<temp<<" ";
    }
    cout<<endl;
  }
  }
}
