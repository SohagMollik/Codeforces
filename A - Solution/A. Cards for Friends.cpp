#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int w,h,n;
    cin>>w>>h>>n;
    ll c=1;
     while(w%2==0){
        c*=2;
        w/=2;
     }
     while(h%2==0){
        c*=2;
        h/=2;
     }
     if(c>=n)cout<<"YES\n";
     else cout<<"NO\n";
   }
}
