#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,e=0,o=0,p=0,n=0;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
        if(a[i]%2==0){
            e++;
        }
         if(a[i]%2!=0){
            o++;
        }
         if(a[i]>0){
            p++;
        }
         if(a[i]<0){
            n++;
        }
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<n<<endl;
}
