#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1||n==2){
            cout<<0<<endl;
        }
        else{
            m=n%2;
            if(m==0){
                cout<<n/2-1<<endl;
            }
            else{
                cout<<n/2<<endl;
            }
        }
    }
}
