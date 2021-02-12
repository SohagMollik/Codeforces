#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
        cin>>s;
    for(int i=0;i<n;i++){
       sort(s[i],s[i]-'a');
       cout<<s[i];
    }
    cout<<endl;
}
