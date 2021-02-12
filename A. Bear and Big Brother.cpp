#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b;
    cin>>a>>b;
    ll c=0;
        while(1){
        if(a>b)break;
        else{
        a=a*3;
        b=b*2;
        c++;
        }
        }

    cout<<c<<endl;
}
