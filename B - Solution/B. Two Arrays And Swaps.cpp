#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0;i<k;i++){
            if(a[i]<b[i]){
                a[i]=b[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}
