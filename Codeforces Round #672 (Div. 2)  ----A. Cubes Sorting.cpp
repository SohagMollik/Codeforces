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
    int i,temp,c=0;
    for(i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                    c++;
                }

    }
    if(c==n-1)
        cout<<"NO\n";
    else
        cout<<"YES\n";

   }
}
