#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,y,t,m,s,d;
    cin>>n;
    y=n/365;
    t=n%365;
    m=t/30;
    s=t%30;
    d=s;
    cout<<y<<" "<<"years\n"<<m<<" "<<"months\n"<<d<<" "<<"days\n";
}
