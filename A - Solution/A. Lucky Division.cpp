#include<bits/stdc++.h>
using namespace std;
int main()
{
   int s;
   int s1[]={4,7,44,47,74,77,444,447,474,477,744,774,777};
   cin>>s;
   int t=s;
   bool temp=true;
   int rem;
   while(s!=0){
    rem=s%10;
    s/=10;
    if(rem!=4&&rem!=7)
        temp=false;
   }
   int i;
   bool ball=false;
   for(i=0;i<11;i++){
   if(t%s1[i]==0)
     ball=true;
   }

   if(temp==true||ball==true)cout<<"YES\n";
   else cout<<"NO\n";

}
