#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],i,m,n;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
   m=a[0];
   n=a[0];
   for(i=0;i<3;i++){
    if(a[i]>m){
        m=a[i];
    }
    if(a[i]<n){
        n=a[i];
    }
   }
   cout<<n<<" "<<m<<endl;


}
