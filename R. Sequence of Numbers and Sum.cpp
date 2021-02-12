#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    while(cin>>m>>n){
        int sum=0;

        if(0>=m||0>=n){
            break;
        }
        else{
            if(m>=n){
                for(int i=n;i<=m;i++){
                    sum+=i;
                    cout<<i<<" ";
                }
            cout<<"sum ="<<sum<<endl;

            }
            else if(n>=m){
                for(int i=m;i<=n;i++){
                    sum+=i;
                    cout<<i<<" ";
                }
                cout<<"sum ="<<sum<<endl;

            }
           // cout<<"sum ="<<sum<<endl;
        }
    }
}
