#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
     if(n==1)cout<<1<<endl;
     else{
        while(n>=100){
        int r=n/100;
         n=n%100;
         c+=r;
        }

        while(n>=20){
        int r=n/20;
         n=n%20;
         c+=r;
        }
        while(n>=10){
        int r=n/10;
         n=n%10;
         c+=r;
        }


        while(n>=5){
        int r=n/5;
         n=n%5;
         c+=r;
        }

        while(n>=1){
        int r=n/1;
         n=n%1;
         c+=r;
        }

    cout<<c<<endl;
}
}
