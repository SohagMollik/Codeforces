#include<bits/stdc++.h>
using namespace std;
int k,l,m,n,d,c;
int main()
{
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++){
        if(i%k&&i%l&&i%m&&i%n)c++;
    }
    cout<<d-c;
}
