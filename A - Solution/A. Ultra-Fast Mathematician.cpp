#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105],s1[105],s2[105]={0};
    cin>>s>>s1;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==s1[i])
            s2[i]='0';
        else s2[i]='1';
    }
    cout<<s2;
}
