#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    if(a<b)cout<<1<<endl;
    else{
    int c=0;
        while(a%b==0){
        a/=b;
        if(a==0){
         return 0;
        }
       else{
        b=b+1;
        c++;
       }
        }
    cout<<c<<endl;
    }
  }
}
