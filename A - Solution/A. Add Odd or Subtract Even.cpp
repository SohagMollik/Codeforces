#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if((a>b&&(a-b)%2==0)||(b>a&&(b-a)%2!=0))
            cout<<1<<endl;
        else if(a==b)cout<<0<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
