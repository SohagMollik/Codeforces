#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t,s,s1;
    cin>>t>>s;
    reverse(t.begin(),t.end());
    bool bal=true;
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[i])
            bal=false;
    }
    if(bal==true)cout<<"YES\n";
    else cout<<"NO\n";
}

