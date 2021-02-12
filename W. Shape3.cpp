#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=1,l;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
           cout<<" ";
        }
        for(l=0;l<k;l++){
            cout<<"*";
        }
        k+=2;
        cout<<"\n";
    }
    int t=n*2-1;
    for(i=n;i>=1;i--){
        for(j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(k=0;k<t;k++){
            cout<<"*";
        }
        t-=2;
        cout<<"\n";
    }
}
