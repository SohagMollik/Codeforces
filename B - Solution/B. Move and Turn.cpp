#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n/2+1;
    int b=n/2+2;
    if(n%2)cout<<2*a*b<<endl;
    else cout<<a*a<<endl;
}
