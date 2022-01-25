#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a,a+n,greater<int>());
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=a[0]-a[i];
   }
   cout<<sum<<endl;
}
