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
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x=n/m;
    int sum;
        sum=x*b;
    int y= n-(m*x);
    if(y!=0&&y<m&&a>=b){
        sum+=b;
    }
    else{
        sum+=(y*a);
    }
    if(m>n&&n==a)cout<<a<<endl;
    else if(m>n&&n!=a)cout<<b<<endl;
    else cout<<min(sum,n*a)<<endl;
    return 0;
}
