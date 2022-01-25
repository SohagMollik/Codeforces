#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   ll n,odd_sum=0,even_sum=0;
   cin>>n;
   even_sum=((n/2)*((n+2)/2));
   ll mal=((n+(n%2))/2);
   odd_sum=mal*mal;
   ll ans=even_sum-odd_sum;
   cout<<ans;
}
