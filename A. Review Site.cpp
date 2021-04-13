#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int r,ok=0,x;
        cin>>r;
        for(int i=1;i<=r;i++){
            cin>>x;
        if(x==1||x==3)ok++;
        }
        cout<<ok<<endl;
    }
    return 0;
}
