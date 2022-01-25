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
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int len=s.size();
       set<char>st;
       for(int i=0;i<len;i++){
        char x=s[i];
        st.insert(x);
       }
        if(len%2==0&&st.size()==1)cout<<"YES\n";
        else if(len%2!=0)cout<<"NO\n";
        else {
                bool ans=true;
                int x=len/2;
            for(int i=0;i<len/2;i++)
            {
                if(s[i]!=s[x])
                {
                    ans=false;
                    x++;
                }
                else{
                    x++;
                }
            }
        if(ans==false)cout<<"NO\n";
        else cout<<"YES\n";
        }
    }

    return 0;
}
