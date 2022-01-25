#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int ball=0,m,n;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]==1){
               m=i;
               n=j;
            }
        }
    }
    int ans=fabs(2-m)+fabs(2-n);
    cout<<ans<<endl;
}
