#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
int main ()
{
    ll a,b,c,d,bal,mal;
        cin>>a>>b>>c>>d;

    bal=pow(a,b);
    mal=pow(c,d);
    if(bal>mal)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
