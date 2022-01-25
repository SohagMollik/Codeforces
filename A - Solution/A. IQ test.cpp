#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0,d=0,s,m;
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
        {
            c++;
            s=i;
        }
        else if(a[i]%2!=0)
        {
            d++;
            m=i;
        }
    }
    if(c==1)cout<<s+1<<endl;
    else if(d==1)cout<<m+1<<endl;

}
