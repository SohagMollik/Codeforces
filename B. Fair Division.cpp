#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2==0){
        int sum1=0,sum2=0;
        for(int i=0;i<n/2;i++){
            sum1+=a[i];
        }
        for(int i=(n/2);i<n;i++){
            sum2+=a[i];
        }
        if(sum1==sum2)cout<<"YES\n";
        else cout<<"NO\n";
        }
        else{
               int sum3=0,sum4=0;
            for(int i=0;i<(n/2)+1;i++){
                sum3+=a[i];
            }
            for(int i=(n/2)+1;i<n;i++){
                sum4+=a[i];
            }
        if(sum3==sum4)cout<<"YES\n";
        else cout<<"NO\n";
        }
    }
}
