#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    regex r("2.*0.*2.*0");
    if(regex_search(s,r))cout<<"YES\n";
    else cout<<"NO\n";
    }

}
