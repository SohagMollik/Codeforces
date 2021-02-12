#include<bits/stdc++.h>
#define ll unsigned char
using namespace std;
int main (){
    ll n,fact=1,i;
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
}
