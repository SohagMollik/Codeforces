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
    int mn=a[0],flag=0;
    for(i=0;i<n;i++){
        if(mn>=a[i]){
            mn=a[i];
            flag=i;
            break;
        }
    }
    cout<<mn<<" "<<flag+1<<endl;
}
