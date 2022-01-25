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
    string s;
    cin>>s;
    int len=s.size();
    vector<int>v;
    for(int i=0;i<len; ){
        if(s[i]=='-'&&s[i+1]=='.'){
            v.pb(1);
            i+=2;
        }
        else if(s[i]=='-'&&s[i+1]=='-'){
            v.pb(2);
            i+=2;
        }
        else{
            v.pb(0);
            i++;
        }
    }
    for(auto &x: v)cout<<x;

    cout<<endl;
    return 0;
}
