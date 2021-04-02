#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int x,y;
   cin>>x>>y;
   char mat[x*y];
   for(int i=0;i<x*y;i++){
    cin>>mat[i];
   }
   int c=0,d=0;
   for(int i=0;i<x*y;i++){
    if(mat[i]=='C'||mat[i]=='M'||mat[i]=='Y')
        c++;
    else if(mat[i]=='W'||mat[i]=='B'||mat[i]=='G')
        d++;
   }
   if(c==(x*x))cout<<"#Color\n";
   else if(d==(x*y))cout<<"#Black&White\n";
   else cout<<"#Color\n";
   return 0;
}
