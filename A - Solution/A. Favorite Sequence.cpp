#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        if(n%2==0){
        for(int i=0;i<n/2;i++){
            cout<<a[i]<<" "<<a[n-i-1]<<" ";
        }
        cout<<endl;
        }
        else if(n%2!=0){
        for(int i=0;i<n/2;i++){
            cout<<a[i]<<" "<<a[n-i-1]<<" ";
        }
        cout<<a[n/2]<<endl;

        }
    }
}

