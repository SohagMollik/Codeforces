#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    int x,cnt[26]={0};
    for(int i=0;i<len;i++){
      if(s[i]>='a'&&s[i]<='z'){
        x=s[i]-'a';
        cnt[x]++;
      }
    }
    for(int j=0;j<26;j++){
        if(cnt[j]!=0)
       printf("%c : %d\n",j+'a',cnt[j]);

    }
}
