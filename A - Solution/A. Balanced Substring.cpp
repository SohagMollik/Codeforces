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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')x++;
            else y++;
        }
        if(n==1)cout<<-1<<" "<<-1<<endl;
       else if(x==y)cout<<1<<" "<<n<<endl;
        else{
                int start,ends;
                bool check=false;
            for(int i=1;i<n;i++){
                if(s[i-1]!=s[i]){
                    start=i;
                    ends=i+1;
                    check=true;
                    break;
                }
            }
            if(check==true)cout<<start<<" "<<ends<<endl;
            else cout<<-1<<" "<<-1<<endl;
        }
    }

    return 0;
}
