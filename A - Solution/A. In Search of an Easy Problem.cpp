#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    bool d=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)d=true;
    }
    if(d)cout<<"HARD\n";
    else cout<<"EASY\n";
}
