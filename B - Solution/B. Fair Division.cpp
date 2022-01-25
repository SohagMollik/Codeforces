#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int f=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]!=a[j]){
                f=0;
            }
        }
    }
    if(f==1)
    {
        if(n%2==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    else{
        if(sum%2!=0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
  }
  return 0;

}
