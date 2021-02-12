#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool mal=false;
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')mal=true;
        else if(s[i]=='+')c=1;
    }
    if(mal==true&&c==1||mal==true&&c==0)
      cout<<"YES\n";
    else if(mal==false&&c==0)
        cout<<"NO\n";
    else cout<<"NO\n";

}
