#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
   s.insert(a);
   s.insert(b);
   s.insert(c);
   s.insert(d);
   cout<<4-s.size()<<endl;
}
