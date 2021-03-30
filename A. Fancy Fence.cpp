#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int x=180-a;
        if(360%x==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;

}
