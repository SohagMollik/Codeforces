#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        for(long long i=1;i<=n;i=i*10+1){
            for(int j=1;j<=9;j++){
                if(i*j<=n){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
