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
    int  ans=0,i;
    char ch[105];
    cin>>ch;
    int len=strlen(ch);
    int  first=abs('a'-ch[0]);
    if(first>13)ans+=26-first;
    else ans+=first;
    for(i=1;i<len;i++){
        int dif=abs(ch[i]-ch[i-1]);
        if(dif>13)ans+=26-dif;
        else ans+=dif;
    }
    cout<<ans<<endl;
    return 0;
}
