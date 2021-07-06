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
    int  n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<=n; i++){
        int index=(i*(i+1))/2;
        if(index>n){
            break;
        }
        else{
        cout<<s[index-1];
    }
    }
    cout<<endl;
    return 0;
}
