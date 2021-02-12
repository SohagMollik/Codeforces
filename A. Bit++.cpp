#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<t;i++){
        cin>>s;
        for(int j=0;j<s.length();j++){
           if(s[j]=='+')cnt1++;
        }
        for(int k=0;k<s.length();k++){
           if(s[k]=='-')cnt2++;
        }
    }
    cout<<(cnt1/2)-(cnt2/2)<<endl;
    //cout<<cnt2/2<<endl;
}
