#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n],i,src,flag=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>src;
    for(i=0;i<n;i++){
        if(a[i]==src){
            flag=1;
        break;

        }

    }
    if(flag==1){
        cout<<i<<endl;
    }
    else {
            cout<<-1<<endl;

        }


}
