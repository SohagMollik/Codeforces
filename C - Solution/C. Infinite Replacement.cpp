#include<bits/stdc++.h>
#define ll   long long
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  cout<<"YES\n"
#define no   cout<<"NO\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
        int get=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='a')
            {
                get=1;
                break;
            }
        }
        if(s1.size()==1&&get==1&&s.size()>=1)cout<<1<<nn;
        else if(s1.size()>1&&get==1&&s.size()>=1)cout<<-1<<nn;
        else {
            ll ans=pow(2,s.size());
                cout<<ans<<nn;
        }

    }

    return 0;
}

