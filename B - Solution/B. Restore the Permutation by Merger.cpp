#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        int x=2*n;
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
         for(int i=0;i<x;i++){
            for(int j=i+1;j<x;){
                if(a[i]==a[j]){
                    for(int k=j;k<x-1;k++)
                        a[k]=a[k+1];

                    x--;

                }
                else
                    j++;

            }
         }
         for(int i=0;i<x;i++){
            cout<<a[i]<<" ";
         }
         cout<<endl;
        }

    return 0;
}
