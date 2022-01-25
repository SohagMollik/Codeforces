#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int a,b;
    cin>>a>>b;
    int x=max(2*a,b);
    int y=max(a,2*b);
    int z=min(x,y);
    cout<<z*z<<endl;
   }
}
