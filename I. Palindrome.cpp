#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    int len=s1.length();
    int j=0;
    for(int i=len-1;i>=0;i--){
        s2[j]=s1[i];
        j++;
    }
    int flag=0;
    for(int i=0;i<len;i++){
            if(s2[i]!=s1[i])
            flag=1;
    }
    if(flag==1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
