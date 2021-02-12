#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            a[i]=0;
        }
        else if(a[i]>0){
            a[i]=1;
        }
        else if(0>a[i]){
            a[i]=2;
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
