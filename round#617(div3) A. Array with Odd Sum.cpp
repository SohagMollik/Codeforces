#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;

    while(t--){
        int sum=0;
       int n,i;
       cin>>n;
       int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
