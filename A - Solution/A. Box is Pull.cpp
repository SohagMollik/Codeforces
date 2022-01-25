#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int x1,y1,x2,y2,ans;
    cin>>x1>>y1>>x2>>y2;
    int d=abs(x2-x1);
    int e=abs(y2-y1);
    ans=d+e;
    if(d!=0&&e!=0)ans+=2;
    cout<<ans<<endl;
   }
}
