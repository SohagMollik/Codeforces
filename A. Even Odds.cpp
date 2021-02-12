#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
   n=(n+1)/2;
   if(k>n)cout<<2*(k-n)<<endl;
   else cout<<2*k-1<<endl;


}

