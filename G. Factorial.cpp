#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        ll n,fact=1;
        cin>>n;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        cout<<fact<<endl;
    }
}
