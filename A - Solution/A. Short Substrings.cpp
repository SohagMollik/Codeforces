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
        int len=s.length();
        if(len==2)cout<<s<<endl;
        else if(len%2==0){
            for(int  i=0;i<len-1;i+=2){
                cout<<s[i];
            }
            cout<<s[len-1]<<endl;
        }
        else{
             for(int i=0;i<len;i++){
                cout<<s[i];
            }
        cout<<endl;
        }
    }

    return 0;
}
