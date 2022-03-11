#include<bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s>>s1;
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(s1[0]==s[i])v.push_back(i+1);
        }
        if(s.size()==1){
            if(s[0]==s1[0])cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
                bool ans=false;
            for(int i=0;i<v.size();i++ )
                {
                    if(v[i]%2!=0)ans=true;
                }
                if(ans==false)cout<<"NO\n";
                else cout<<"YES\n";
            }
    }

    return 0;
}
