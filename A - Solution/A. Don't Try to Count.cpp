/*
****************************************************************
    __author__ : Sohag Mollik

****************************************************************
*/

#include <bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n")
#define no   printf("NO\n")
using namespace std;

int main()
{


    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
   while(t--)
   {
       int n,m;
       cin>>n>>m;
       string x,y;
       cin>>x>>y;
       int ans=-1;
       for(int i=0;i<6;++i)
       {
           size_t  found= x.find(y);
           if(found != string::npos){
            ans=i;
            break;
           }
           x+=x;
       }

       cout<<ans<<nn;
   }


    return 0;
}

