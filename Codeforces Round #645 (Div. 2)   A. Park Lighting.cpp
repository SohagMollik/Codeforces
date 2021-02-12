
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin>>t;
  while(t--){
    int m,n,a,b,c;
    cin>>m>>n;
    if(m==1&&n==1){
        cout<<1<<endl;
    }
   else if(m==n){
         a=2*((m+1)*n);
        cout<<(a/4)-1<<endl;
    }
    else{
         b=(m+1)*n;
        c=(n+1)*m;
        cout<<(c+b)/(m+n)<<endl;
    }
  }
}
