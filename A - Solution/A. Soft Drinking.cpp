#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ok=(k*l)/nl;
    int x=c*d;
    int y=p/np;
    int ans=min(ok/n,x/n);
    cout<<min(ans,y/n)<<endl;
    return 0;
}
