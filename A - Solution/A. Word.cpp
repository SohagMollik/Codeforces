#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105],s1[105]={0};
    cin>>s;
    int c=0,d=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A'&&s[i]<='Z')c++;
        else if(s[i]>='a'&&s[i]<='z')d++;
    }
    if(d>c){
        for(int i=0;i<strlen(s);i++){
                if(s[i]>='A'&&s[i]<='Z'){
                  s1[i]=(char)s[i]+32;
                }
               else{
                s1[i]=s[i];
               }
        }
    }
    else if(c>d){
        for(int i=0;i<strlen(s);i++){
                if(s[i]>='a'&&s[i]<='z'){
                  s1[i]=(char)s[i]-32;
                }
                else{
                    s1[i]=s[i];
                }
        }
    }
    else if(c==d){
        for(int i=0;i<strlen(s);i++){
            if(s[i]>='A'&&s[i]<='Z'){
            s1[i]=(char)s[i]+32;
            }
            else{
                s1[i]=s[i];
            }
        }
    }

    cout<<s1<<endl;

}
