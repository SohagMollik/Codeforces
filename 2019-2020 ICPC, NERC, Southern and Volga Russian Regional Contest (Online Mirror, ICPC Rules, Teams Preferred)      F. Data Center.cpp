#include<bits/stdc++.h>
using namespace std;
int main ()
{
 long long a,x,y,p;
 cin>>a;
 x=sqrt(a);
//nothing
 if(a%x==0){
 y=a/x;
 p=2*(x+y);
 cout<<p<<endl;
 }
 else{
    cout<<2*a+2<<endl;
 }

}
