#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int n;
    cin>>n;
    int a[n],q,x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    while(q--){
        cin>>x;
     cout<<upper_bound(a,a+n,x)-a<<endl;
    }

 return 0;
}
