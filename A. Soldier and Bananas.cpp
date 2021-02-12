#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll k,n,w;
    cin>>k>>n>>w;
    ll i,sum=0;
    i=k;
    while(w--){
        sum+=i;
        i+=k;
    }
    if(sum>n)cout<<sum-n<<endl;
    else cout<<0<<endl;
}
