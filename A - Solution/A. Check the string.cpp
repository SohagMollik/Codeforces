#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define nn "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    string s,s1;
    cin>>s;
    s1=s;
    int x=0,y=0,z=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a')x++;
        else if(s[i]=='b')y++;
        else if(s[i]=='c')z++;
    }
   sort(s.begin(),s.end());
   bool ans=true;
   for(int i=0;i<s.size();i++){
    if(s[i]!=s1[i])ans=false;
   }

        if(ans==false)no;
        else {
            if(x==0&&y==0||x==0&&z==0||y==0&&z==0||x==0||y==0||z==0)no;
            else if(z==x||z==y)yes;
            else no;
        }


    return 0;
}
