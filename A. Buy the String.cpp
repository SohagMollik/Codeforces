#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n,c0,c1,h,c=0,d=0;
       cin>>n>>c0>>c1>>h;
       string s;
       cin>>s;
       int x=0,y=0;
       for(int i=0;i<n;i++){
        if(s[i]=='1')x++;
        else if(s[i]=='0')y++;
       }
       if(x==n){
       int ans=n*c1;
        int temp=(h*n)+(n*c0);
        if(ans>temp)cout<<temp<<endl;
        else cout<<ans<<endl;
       }
       else if(y==n){
       int ans=n*c0;
        int temp=(h*n)+(n*c1);
        if(ans>temp)cout<<temp<<endl;
        else cout<<ans<<endl;
       }
       else{
        int ans=(x*c1)+(y*c0);
        int temp=(x*h)+(n*c0);
        int flag=(y*h)+(n*c1);
        int bal=min(ans,temp);
        int mal=min(bal,flag);
        cout<<mal<<endl;
       }

    }


}
