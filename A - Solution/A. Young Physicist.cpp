#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,b,c,sum1=0,sum2=0,sum3=0,sum;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c;
  sum1+=a;
  sum2+=b;
  sum3+=c;
  }

  //sum=sum1+sum2+sum3;
  if(sum1==0&&sum2==0&&sum3==0)cout<<"YES\n";
  else cout<<"NO\n";
}
