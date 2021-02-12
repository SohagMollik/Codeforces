#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y,sum=0;
        cin>>x>>y;
        if(x>=y){
            for(int i=y+1;i<x;i++){
                if(i%2!=0)
                    sum+=i;
            }
            cout<<sum<<endl;
        }
        else if(y>=x){
            for(int i=x+1;i<y;i++){
                if(i%2!=0)
                    sum+=i;
            }
            cout<<sum<<endl;
        }

    }
}
