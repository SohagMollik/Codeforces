#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        int a[n],ok[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            ok[i]=a[i];
        }
       sort(ok,ok+n);
        for(i=0;i<n;i++){
            if(a[i]!=ok[1]){
             cout<<i+1<<endl;
            }
        }
    }
    return 0;
}

