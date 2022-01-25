#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[55];
    int n,k,i;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
        int count=0;
    for(i=0;i<n;i++){
        if(a[i]>=a[k-1]&&a[i]>0)count++;
    }
    cout<<count<<endl;

}
