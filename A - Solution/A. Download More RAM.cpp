#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
      int a[n];
      int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int m=0;m<n;m++){
            cin>>b[m];
        }

        for(int i=0;i<n;i++){
             for(int m=0;m<n;m++){
                if(k>=a[m]&&a[m]!=-1){
                    k+=b[m];
                    a[m]=-1;
                }
                else {k+=0;}
             }
        }
        cout<<k<<"\n";

    }

    return 0;
}
