#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
  int a[n],mx,mn;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

    mx=a[0];
    mn=a[0];

  int c=0;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
        mx=a[i];
        c++;
        }
        if(mn>a[i])
        {
        mn=a[i];
        c++;
        }
    }
    cout<<c<<endl;
}
