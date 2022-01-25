#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[n],dif[105];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        bool ans=false;
        for(i=0;i<n;i++){
            dif[i]=abs(a[i+1]-a[i]);
            if(dif[i]==1||dif[i]==0){
                ans=true;
                break;
            }
        }
        if(ans==true)
            cout<<"yes"<<endl;

        else
            cout<<"no"<<endl;
    }
}
