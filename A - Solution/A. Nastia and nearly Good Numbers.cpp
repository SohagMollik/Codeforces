#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,x;
        cin>>a>>b;
        if(b==1){
            cout<<"NO\n";
        }
        else{
                cout<<"YES\n";
                x=a*b;
            cout<<x<<" "<<a<<" "<<x+a<<endl;
        }
    }
return 0;
}
