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
    int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int idx;
    for(int i=0;i<15;i++){
        if(arr[i]==n)
        {
            idx=i;
            break;
        }
    }
    int xx=arr[idx+1];
    if(m==xx)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
