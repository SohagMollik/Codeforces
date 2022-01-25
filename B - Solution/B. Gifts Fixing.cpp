#include<bits/stdc++.h>
using namespace std;
int a[60],b[60];
int main()
{
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        cin>>a[i];

     }
     for(int i=0;i<n;i++){
        cin>>b[i];

     }
     int*x,*y;
      x=min_element(a,a+n);
      y=min_element(b,b+n);

     long long int ok=0;
     for(int i=0;i<n;++i){
        ok+=max(a[i]-*x,b[i]-*y);
     }
     cout<<ok<<endl;

    }
}


