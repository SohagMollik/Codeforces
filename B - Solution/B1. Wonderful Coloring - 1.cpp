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
        map<char,int>mp;
        map<char,int>::iterator it;
       for(int i=0;i<s.size();i++){
        mp[s[i]]++;
       }
       int x=0,y=0;
       for(it=mp.begin();it!=mp.end();it++){
        if(it->second >1)x++;
        else y++;
       }
       cout<<x+(y/2)<<endl;
    }

    return 0;
}
