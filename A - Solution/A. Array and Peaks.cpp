#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(abs(n-k)==1||abs(n-k)==0)cout<<-1<<endl;
        else{
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
