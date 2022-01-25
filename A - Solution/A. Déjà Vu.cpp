#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
   string s,s1="a",s3;
   cin>>s;
   s3=s+s1;
   reverse(s3.begin(),s3.end());
   if(s3!=s+s1){
    cout<<"YES\n";
    cout<<s+s1<<endl;
   }
   else{
    s3=s1+s;
    reverse(s3.begin(),s3.end());
    if(s3!=s1+s){
        cout<<"YES\n";
        cout<<s1+s<<endl;
    }
    else
    {
        cout<<"NO\n";
    }
   }
   }
   return 0;
}
