#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(10>=a[i]){
            cout<<"A"<<"["<<i<<"]"<<" = "<<a[i]<<endl;
        }
    }
}
