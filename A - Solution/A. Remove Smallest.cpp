#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        bool temp=false;
        for(int i=0;i<n-1;i++){
                if(a[i+1]-a[i]>1)temp=true;

        }
        if(temp==true)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
