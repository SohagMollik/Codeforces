#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m],i,s;
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
       cin>>s;
       int flag=0;
    for(i=0;i<m;i++){
        if(a[i]==s)
            flag=1;
      }
      if(flag==1){
        cout<<"found\n";
      }
      else{
        cout<<"not found\n";
      }
    }
}
