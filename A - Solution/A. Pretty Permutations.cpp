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
vector<int>v;
int main()
{

    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0){
                int i,j;
        for( i=2, j=1;i<=n&&j<=n;i+=2,j+=2){
            cout<<i<<" "<<j<<" ";
        }
        cout<<endl;
    }
    else{
            int i,j;
     for( i=2, j=1;i<n&&j<n;i+=2,j+=2){
            v.pb(i);
            v.pb(j);
        }
        v.erase(v.end()-1);
        for(auto &x: v){
            cout<<x<<" ";
        }
        cout<<n<<" "<<n-2<<endl;
        v.clear();
    }
    }
    return 0;
}
