#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')a++;
            else if(s[i]=='B')b++;
            else if(s[i]=='C')c++;
        }
        if(b==0)cout<<"no\n";
        else if(a>b)cout<<"no\n";
        else if(a==0){
            if(b==c)cout<<"yes\n";
            else cout<<"no\n";
        }
        else if(c==0){
            if(b==a)cout<<"yes\n";
            else cout<<"no\n";
        }
      else  if(b>=a){
        int x=min(a,b);
        int y=max(a,b);
        int z=y-x;
        if(z==c)cout<<"yes\n";
        else cout<<"no\n";
        }

    }

    return 0;
}
