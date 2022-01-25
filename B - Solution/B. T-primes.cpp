#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        ll x,i;
        scanf("%lld",&x);
        ll y=sqrt(x);
        for(i=2;i*i<y;i++)
            if(x%i==0)break;
        if(i*i>y&&y*y==x&&x>1)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
