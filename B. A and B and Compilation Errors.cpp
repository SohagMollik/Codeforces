#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,x=0,y=0,z=0;
    cin>>n;
    int a[n],b[n-1],c[n-2];
    for(int i=0;i<n;i++){
        cin>>a[i];
        x+=a[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>b[i];
        y+=b[i];
    }
    for(int i=0;i<n-2;i++){
        cin>>c[i];
        z+=c[i];
    }
   int ans,vis;
   ans=x-y;
   vis=y-z;
    cout<<ans<<endl<<vis<<endl;
    return 0;
}
