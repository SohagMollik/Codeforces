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
        int zero=0,one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')zero++;
            else one++;
        }
        cout<<min(zero,one)-(zero==one)<<endl;
    }

    return 0;
}
