#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        while(a[i]!=0){
            int temp=a[i]%10;
            sum+=temp;
            a[i]=a[i]/10;
        }
    }
    cout<<sum<<endl;
}
