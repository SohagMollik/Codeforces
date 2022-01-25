#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0,x=0,y=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]&1)x++;
            else y++;
        }
        if(sum%2!=0||(x>0&&y>0))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
