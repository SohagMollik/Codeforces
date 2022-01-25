#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string x(m,'#'),y(m-1,'.');
    for(int i=1;i<=n;i++){
        if(i%2!=0)cout<<x<<endl;
        else if(i%4==0)cout<<"#"<<y<<endl;
        else cout<<y<<"#"<<endl;

    }
}
