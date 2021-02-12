#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll l=s.length();
    ll sum=0;
    for(int i=0;i<l;i++){
        sum=sum+s[i]-'0';
    }
    cout<<sum<<endl;

}
