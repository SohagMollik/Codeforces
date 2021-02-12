#include<bits/stdc++.h>
using namespace std;
int main (){
int a,b;
cin>>a>>b;
if(a>b){
if(a%b==0)
    cout<<"Multiples\n";
else
    cout<<"No Multiples\n";
}
else{
   if(b%a==0)
    cout<<"Multiples\n";
else
    cout<<"No Multiples\n";
}
}
