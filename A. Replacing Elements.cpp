#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[n-1]>d&&a[0]+a[1]>d)cout<<"no\n";
    else cout<<"yes\n";

  }

}
