#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,s=1,t;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
    }
    else{
    cout<<f<<" "<<s<<" ";
    int c=2;
    while(c<n){
       t=f+s;
       f=s;
       s=t;
       c++;
       cout<<t<<" ";
    }
    }
}
