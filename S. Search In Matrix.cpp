#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m],i,j,x;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>x;
    int flag=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==x)
                flag=1;
        }
    }
    if(flag==1)
        cout<<"will not take number\n";
        else
        cout<<"will take number\n";
}
