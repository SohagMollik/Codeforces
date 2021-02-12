#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll n,t;
    cin>>n;
    while(n!=0){
        t=n%10;
        n/=10;
    }
    if(t%2==0){
        cout<<"EVEV\n";
    }
    else{
        cout<<"ODD\n";
    }
}
