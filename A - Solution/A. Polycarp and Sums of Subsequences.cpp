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
    int test;
    cin>>test;
    while(test--){
    int a[7];
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    if((a[0]+a[1]==a[3])&&(a[0]+a[2]==a[4])&&(a[1]+a[2]==a[5])&&(a[0]+a[1]+a[2]==a[6]))
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    else if((a[0]+a[1]==a[2])&&(a[0]+a[3]==a[4])&&(a[1]+a[3]==a[5])&&(a[0]+a[1]+a[3]==a[6]))
        cout<<a[0]<<" "<<a[1]<<" "<<a[3]<<endl;
    }
    return 0;
}
