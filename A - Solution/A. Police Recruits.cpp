#include<bits/stdc++.h>
using namespace std;
int main()
{
   int sum=0,ans=0,n;
   cin>>n;
   while(n--){
    int x;
    cin>>x;
    if(x==-1){
        if(!sum)
        ans++;
        else
          sum--;

    }
    else
        sum+=x;
   }
   cout<<ans<<endl;
}
