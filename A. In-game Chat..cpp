#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]!=')')break;
        else if(s[i]==')'){
            c++;

        }
    }
    int ans=n-c;
    if(c>ans)cout<<"YES\n";
    else cout<<"NO"<<endl;
   }
}
