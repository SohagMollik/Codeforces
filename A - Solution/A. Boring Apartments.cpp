#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    string x;
    cin>>x;
    int ans=x[0]-'0'-1;
    int len=x.length();
    int ok=10*ans+len*(len+1)/2;
    cout<<ok<<endl;
 }
 return 0;
}
