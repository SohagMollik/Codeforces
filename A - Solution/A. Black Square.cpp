#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int x=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            x+=a;
        else if(s[i]=='2')
            x+=b;
        else if(s[i]=='3')
            x+=c;
        else if(s[i]=='4')
            x+=d;
    }
    cout<<x<<endl;
 return 0;
}
