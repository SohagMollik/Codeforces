#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 if(n==1&&a[0]==1)cout<<0<<endl;
 else if(n==1&&a[0]==0)cout<<1<<endl;
 else{
 int one=0,zero=0,ok;
 for(int i=0;i<n;i++){
    if(a[i]==0)zero++;
    else one++;
 }
 if(zero%2!=0)
 {
     ok=zero-1;
 }
 else{
    ok=zero;
 }
 cout<<one+ok<<endl;
 }
 return 0;
}
