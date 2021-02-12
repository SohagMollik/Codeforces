#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i;
    cin>>m>>n;
    int a[m];
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    int b[n],j;
    for(i=0;i<n;i++){
       b[i]=a[i];
    }
    for(i=0;i<n;i++){
        int c=0;
        for(j=i;j<m;j++){
            if(b[i]==a[j])
                c++;
        }
    cout<<c<<endl;
    }
}
