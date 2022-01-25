#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k,r,ans;
    cin>>k>>r;
    for(int i=1;i<10;i++){
        if(((k*i)%10==0)||((k*i)%10==r)){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
