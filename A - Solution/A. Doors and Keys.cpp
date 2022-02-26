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
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='R'||s[0]=='G'||s[0]=='B')cout<<"NO\n";
        else{
        int ans=0,ans1=0,ans2=0;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]=='r'){
                    if(s[j]=='R')ans=1;

                }
                else if(s[i]=='g')
                {
                    if(s[j]=='G')ans1=1;

                }
                else if(s[i]=='b')
                {
                    if(s[j]=='B')ans2=1;

                }
            }
        }
       if(ans==1&&ans1==1&&ans2==1)cout<<"YES\n";
       else cout<<"NO\n";
        }
    }

    return 0;
}
