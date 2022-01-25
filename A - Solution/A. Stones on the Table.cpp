#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin>>t;
    char s[55];
    for(int i=0;i<t;i++){
    cin>>s[i];
    //scanf("%c",&i);
    }
    for(int i=0;i<t;i++){
        if(s[i]==s[i+1])cnt++;
    }
    cout<<cnt<<endl;
}
