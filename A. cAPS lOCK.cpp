#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105],s1[105]={0};
    cin>>s;
    bool b=false;
    bool q=false;
    if(strlen(s)==1){
        if(s[0]>='a'&&s[0]<='z')
            s[0]=(char)s[0]-32;
        else if(s[0]>='A'&&s[0]<='Z')
            s[0]=(char)s[0]+32;
        cout<<s<<endl;
    }else{
    for(int i=1;i<strlen(s);i++){
        if((s[0]>='A'&&s[0]<='Z')&&(s[i]>='a'&&s[i]<='z')){
         b=true;
        }
         if(s[i]>='a'&&s[i]<='z'){
            q=true;
        }
         if((s[0]>='a'&&s[0]<='z')&&(s[i]>='a'&&s[i]<='z')){
            s1[0]=(char)s[0]-32;
            for(int i=1;i<strlen(s);i++){
                s1[i]=(char)s[i]-32;
            }
        }
        else if((s[0]>='a'&&s[0]<='z')&&(s[i]>='A'&&s[i]<='Z')){
            s1[0]=(char)s[0]-32;
            for(int i=1;i<strlen(s);i++){
                s1[i]=(char)s[i]+32;
            }
        }
        else if((s[0]>='A'&&s[0]<='Z')&&(s[i]>='A'&&s[i]<='Z')){
            s1[0]=(char)s[0]+32;
            for(int i=1;i<strlen(s);i++){
                s1[i]=(char)s[i]+32;
            }
        }

    }
    if(b==true)cout<<s<<endl;
    else if(q==true)cout<<s<<endl;
    else cout<<s1<<endl;

}
}
