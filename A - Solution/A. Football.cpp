#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool temp=false;
    if(s.find("0000000")||s.find("1111111"))
        temp=true;
    else
        temp=false;
    if(temp==true)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
