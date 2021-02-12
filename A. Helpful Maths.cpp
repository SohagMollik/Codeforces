#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=2;i<s.length();i+=2){
        for(int j=0;j<i;j+=2){
            if(s[j]>s[i])swap(s[j],s[i]);
        }
    }
    cout<<s<<endl;
}

