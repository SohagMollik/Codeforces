#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100005],s2[100005];
    cin>>s1;
    int len=strlen(s1);
    for(int i=0;i<len;i++){
        if(s1[i]>='a'&&s1[i]<='z'){
            s2[i]=(char)s1[i]-32;
        }
       else if(s1[i]>='A'&&s1[i]<='Z'){
            s2[i]=(char)s1[i]+32;
        }
        else if(s1[i]==','){
            s2[i]=' ';
        }
        else{
            s2[i]=s1[i];
        }
    }
    cout<<s2<<endl;
}
