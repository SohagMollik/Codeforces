#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x=ceil(k/2.0);
        cout<<n-x<<endl;
        for(int i=x;i<=n;i++){
            if(i!=k)
                cout<<i<<' ';
        }
        cout<<endl;
    }
}
