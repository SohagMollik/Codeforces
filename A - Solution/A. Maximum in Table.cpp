#include<bits/stdc++.h>
using namespace std;
int solve(int x,int y)
{
    if(x==1||y==1)return 1;
    return solve(x-1,y)+solve(x,y-1);
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin>>n;
   int x,y;
   x=n;
   y=n;
   cout<<solve(x,y)<<endl;
   return 0;
}
