#include<bits/stdc++.h>
#include<math.h>
#define pi acos(-1)
using namespace std;
int main ()
{
    double r,result,s,n,p;

      cin>>n>>r;
      p=pi/n;
      s=sin(p);
      result=(s*r/(1-s));
      cout<<fixed<<setprecision(7)<<result<<endl;


}

