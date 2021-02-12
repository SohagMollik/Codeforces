#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.length();
        if(10>=len)cout<<s<<endl;
        else
            cout<<s[0]<<len-2<<s[len-1]<<endl;
    }
}
