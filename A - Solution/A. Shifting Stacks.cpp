#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    int d=0;
   for(int i=0;i<n;i++){
    if((a[i]-1>a[i+1]+1))d++;
    //else if(a[i]>a[i+1])c++;
   }
   if(d==0)cout<<"yes\n";
   else cout<<"no\n";
   }
}
