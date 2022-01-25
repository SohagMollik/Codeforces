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
    int n,m;
    cin>>n>>m;
    int div=n/2;
    int mode=n%2;
    if(n==m)cout<<n<<endl;
    else if((div+mode)%m==0)cout<<div+mode<<endl;
    else{
            bool temp=false;
           int ans;
        for(int i=div+1;i<n;i++){
            if(i%m==0){
                ans=i;
                temp=true;
                break;
            }
        }
        if(temp==true)cout<<ans<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}
