#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1005],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   int mn=a[0],q,mx=a[0],r;
    for(int i=0;i<n;i++){
        if(mn>=a[i]){
            mn=a[i];
            q=i;
        }
        if(a[i]>=mx){
            mx=a[i];
            r=i;
        }
    }
    a[q]=mx;
    a[r]=mn;
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
}
