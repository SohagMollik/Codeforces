#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int c=1,b;
    int l=s.length();
    c=0;
    for(int i=0;i<l;i++){
        if(s[i]==' ')
         c++;
       else if(s[i]=='!'||s[i]=='.'||s[i]=='?'||s[i]==',')
         c=c;


    }
    cout<<c<<endl;
}
