#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        ll mx=0,mn=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            mn+=a[i];
            mx+=((a[i]+x-1)/x);
        }
        cout<<(mn+x-1)/x<<" "<<mx<<endl;

    }

}
