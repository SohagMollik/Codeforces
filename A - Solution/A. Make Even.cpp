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
        int l=s.size();
        if((s[l-1]-'0')%2==0)cout<<0<<endl;
        else if(l==1&&(s[0]-'0')%2!=0)cout<<-1<<endl;
        else if(l>1&&(s[0]-'0')%2==0)cout<<1<<endl;
        else if(l>1){
                int c=0;
            for(int i=0;i<l;i++){
                if((s[i]-'0')%2!=0)c++;
            }
        if(c==l)cout<<-1<<endl;
        else cout<<2<<endl;
        }
        else cout<<2<<endl;
    }

    return 0;
}
