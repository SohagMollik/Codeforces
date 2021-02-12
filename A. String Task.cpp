#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s1[105],s2[105]={0};

    cin>>s1;
    for(int i=0;i<strlen(s1);i++){
            if(s1[i]>='A'&&s1[i]<='Z')
        s2[i]=s1[i]+32;
        else
            s2[i]=s1[i];
    }
    int j,i,l;

     l=strlen(s2);

    for( i=0; i<l; i++){
        if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u'||s2[i]=='y'){
        for(j=i;j<l;j++){
            s2[j]=s2[j+1];
        }
        l--;
        i--;
        }
    }
    int len=strlen(s2);

    for(i=0;i<len;i++){
       cout<<"."<<s2[i];
    }
    cout<<endl;

}
