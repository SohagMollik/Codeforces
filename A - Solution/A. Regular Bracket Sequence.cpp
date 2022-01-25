#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]==')'||s[s.length()-1]=='('||(s.length()%2))
            cout<<"NO\n";
        else cout<<"YES\n";
    }
}
