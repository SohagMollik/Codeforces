#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j;
    cin>>m>>n;
    int a[m];
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    int b[n],k;
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<m;i++){
        for(j=i;j<m;j++){
            for(k=i;k<=j;k++){
            cout<<"["<<a[k]<<","<<"]";
            }
            cout<<endl;
        }
    }

}
