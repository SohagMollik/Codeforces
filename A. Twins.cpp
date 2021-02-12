#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,p=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        s+=a[i];
    }

        sort(a,a+n);

    for(i=0;2*p<=s;i++)
        p+=a[n-i-1];

    cout<<i<<endl;
}
