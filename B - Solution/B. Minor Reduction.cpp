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
        int mx=0;
        vector<int>v;
         for(int i=0;i<s.size();i++){
             mx= max((s[i]-'0'),mx);
         }
         v.pb(mx);
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')==mx){
                if(i==0){
                    sum+=(s[1]-'0');
                }
                else if(i==s.size()-1){
                        int len=s.size();
                    sum+=(s[len-2]-'0');
                }

            }
        }
//         int x=max_element(v.begin(),v.end())-v.begin();
//         if(x==0){
//            int xx=((s[0]-'0')+(s[1]-'0'));
//            string yy=to_string(xx);
//            for(int i=2;i<s.size();i++){
//                yy+=s[i];
//            }
//            cout<<yy<<endl;
//         }
         //cout<<mx<<" "<<x+1<<endl;
    }

    return 0;
}
