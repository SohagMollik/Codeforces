#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a1,b1,a2,b2,r,s;
    cin>>t;
    while(t--){
        cin>>a1>>b1>>a2>>b2;
        r=(a1*b1)+(a2*b2);
        s=sqrt(r);
        if(s*s==r)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
