#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n],c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        int ok=sqrt(a[i]);
        if(ok*ok==a[i]){
            c++;
        }
    }
    if(c==n)cout<<"NO\n";
    else cout<<"YeS\n";

    }
    return 0;
}
