#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n],a2[n];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    sort(a1,a1+n);
    sort(a2,a2+n);
    int flag=0;
    for(int i=0;i<n;i++){
        if(a1[i]!=a2[i]){
            flag=1;
        }
    }
    if(flag==1)
        cout<<"no\n";
    else
        cout<<"yes\n";
}
