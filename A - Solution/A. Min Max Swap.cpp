#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int j=0;j<n;j++){
            cin>>b[j];
        }
        for(int i=0;i<n;i++){
            if(a[i]<b[i])
            {
                int x=a[i];
                a[i]=b[i];
                 b[i]=x;
            }
        }
        sort(a,a+n,greater<int>());
        sort(b,b+n,greater<int>());
        cout<<a[0]*b[0]<<"\n";
    }
    return 0;
}
