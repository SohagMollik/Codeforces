#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll n1=n;
    while(n1){
        ll r=(n1%10);
        if(r!=0){
            if((n%r)!=0){
                n1=n+1;
                n=n+1;
                continue;
            }
        }
            n1=n1/10;
    }
    cout<<n<<endl;
  }

}
