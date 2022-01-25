#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int a,b;
      cin>>a>>b;
      int c=max(a,b);
      int d=min(a,b);
      int result=c-d;
      if(result%10==0){
        cout<<result/10<<endl;
      }
      else{
        cout<<(result/10)+1<<endl;
      }
  }
}
