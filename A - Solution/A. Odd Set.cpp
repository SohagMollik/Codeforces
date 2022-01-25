#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[2*n],even=0,odd=0;
        for(int i=1;i<=2*n;i++){
            cin>>a[i];
            if(a[i]&1)odd++;
            else even++;
        }

        if(odd==even)cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;

}
