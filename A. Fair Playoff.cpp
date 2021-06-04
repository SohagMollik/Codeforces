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
int a[4],b[4];
int main()
{
   fast;
   int t;
   cin>>t;
   while(t--){
    for(int i=0;i<4;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+4,greater<int>());
    int x=a[0];
    int y=a[1];
    int c,d;
    for(int i=0;i<4;i++){
        if(x==b[i]){
            c=i;
        }
        else if(y==b[i]){
            d=i;
        }
    }

    if(c==0&&d==1||c==1&&d==0|| c==2&&d==3||c==3&&d==2)cout<<"NO\n";
    else cout<<"YES\n";
   }

    return 0;
}
