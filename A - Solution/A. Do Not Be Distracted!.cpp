#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define mod   1000000007
#define pi    acos(-1.0)
#define yes   cout<<"YES\n";
#define no    cout<<"NO\n";
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve()
{
      int n;
       cin>>n;
       string s;
       cin>>s;
     for(char c='A';c<='Z';c++){
         int first=n;
       int last= -1;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                first=min(first,i);
                last=max(last,i);

            }

        }
        for(int i=first;i<=last;i++){
            if(s[i]!=c){
                cout<<"NO\n";
            return ;
        }
     }
     }
        cout<<"YES\n";

}
int main()
{
    fast;
   int t;
   cin>>t;
   while(t--)
   {
       solve();
   }

    return 0;
}
