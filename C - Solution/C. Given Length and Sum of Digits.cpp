#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve(int m,int s)
{
  int x=m;
  int y=s;
  char ans[105];
    if(s==0){
        if(m==1)cout<<0<<" "<<0<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
   else if(s>9*m){cout<<-1<<" "<<-1<<endl;}
    else{
    for(int i=0;i<m;i++){
        int z=s-9*(m-i-1);
        if(z<0)
                  z=0;
        if(z==0&&i==0)
                 z=1;
        s-=z;
        ans[i]=z+'0';
    }
    ans[m]=0;
   printf("%s",ans);

   for(int k=0;k<x;k++){
    int sum=y;
    if(sum>9)
              sum=9;
      y-=sum;
      ans[k]=sum+'0';

   }
   printf(" %s\n",ans);
}
}
int main()
{
    fast;
    int m,s;
    cin>>m>>s;
     solve(m,s);

    return 0;
}
