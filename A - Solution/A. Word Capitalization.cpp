#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1005];
    cin>>s;
    if(s[0]>='A'&&s[0]<='Z'){
        cout<<s<<endl;
    }else{
    s[0]=(char)s[0]-32;
    cout<<s<<endl;
    }
}
