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
       vector<int>v(n),v1;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        v1=v;
        sort(v1.begin(),v1.end());
        int i=0;
        while(1){
            if(v==v1)break;
            if(i%2){
                for(int k=1;i<n-1;k+=2){
                    if(v[k]>v[k+1])swap(v[k],v[k+1]);
                }
            }
            else{
                for(int j=0;j<n-2;j+=2){
                    if(v[j]>v[j+1])swap(v[j],v[j+1]);
                }
            }
            i++;
        }
        cout<<i<<endl;
    }

    return 0;
}
