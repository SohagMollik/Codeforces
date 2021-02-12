#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,temp=0,x,a[160];
    cin>>n;
    a[0]=1;
    s=1;
    for(i=1;i<=n;i++){
        for(j=0;j<s;j++){
            x=a[j]*i+temp;
            a[j]=x%10;
            temp=x/10;
        }
        while(temp!=0){
            a[s]=temp%10;
            temp/=10;
            s++;
        }
        for(i=s-1;i>=0;i--)
          cout<<a[i]<<" ";
    }
    cout<<endl;
}
