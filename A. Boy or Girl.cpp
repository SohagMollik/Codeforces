#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1])c++;
    }

    if(c&1)
        cout<<"IGNORE HIM!\n";
    else
        cout<<"CHAT WITH HER!\n";
}
