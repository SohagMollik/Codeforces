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
const int N=10e6+6;
bool mark[N];
vector<int>vec;
void sieve()
{
    for(int i=3;i*i<=N;i+=2){
        if(mark[i]){
            for(int j=i*i;j<=N;j+=2*i){
                mark[j]=1;
            }
        }
    }
    vec.pb(2);
    for(int i=3;i<=N;i+=2){
        if(mark[i]==0)vec.pb(i);
    }
}
int solve(int n)
{
    int cnt=0;
    for(auto& x: vec){
     if(1ll*x*x>n){
        break;
     }
            while(n%x==0){
                n/=x;
                cnt++;
        }
    }
    if(n>1)cnt++;

    return cnt;
}
int main()
{
    fast;
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,k;
       cin>>a>>b>>k;
       int sum=solve(a)+solve(b);
       int gcd=__gcd(a,b);
       if(k>sum){
        cout<<"NO\n";
       }
        else if(a!=gcd && b!=gcd && k==1){
        cout<<"NO\n";
       }
      else  if(a==b && k==1){
        cout<<"NO\n";
       }
       else
       cout<<"YES\n";
    }

    return 0;
}
