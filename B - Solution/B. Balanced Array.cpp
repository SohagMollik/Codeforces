#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n/2;i++){
            a[i]=2*(i+1);
            sum+=a[i];
        }
        int k=0,flag=0;
        for(int i=n/2;i<n;i++){
            if(i==n-1){
                if(sum%2!=0){
                    a[i]=sum;
                    flag=1;
                }
            }
            else{
                a[i]=(2*k)+1;
                k++;
                sum-=a[i];
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}
