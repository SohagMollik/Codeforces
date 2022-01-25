#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,m,n,p,q,mx,s;
    cin>>a>>b>>c;
    int h[5];
    m=a+b*c;
    h[0]=m;
    n=a*(b+c);
    h[1]=n;
    p=a*b*c;
    h[2]=p;
    q=(a+b)*c;
    h[3]=q;
    s=a+b+c;
    h[4]=s;
    mx=h[0];
    for(int i=0;i<5;i++){
        if(h[i]>=mx)mx=h[i];
    }
    cout<<mx<<endl;

}
