#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int ans=ceil((m*n+1)/2);
        cout<<ans<<endl;
    }
  return 0;
}
