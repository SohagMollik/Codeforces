#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       if(c>=a&&c<=b)cout<<c<<"\n";
       else if(a>=c&&a<=d)cout<<a<<"\n";
       else cout<<a+c<<"\n";
   }

    return 0;
}

