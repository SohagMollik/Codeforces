#include<bits/stdc++.h>
using namespace std;
//#define size 10000005
vector<int>v;
void sieve(int n){
//bool flag[n];
vector<bool>v1;
//int prime[n];
  int i,j,k=0;
  v1[0]=v1[1]=1;
  for(i=4;i<=n;i+=2){v1[i]=1;}
  for(i=3;i*i<=n;i+=2){
    for(j=i*i;j<=n;j+=2*i){
        v1[j]=1;
    }
  }
  for(i=2;i<=n;i++){
    if(v1[i]==0)v.push_back(i);
  }
 v1.clear();
}
int divisor(int n){
    int sum=1;
 for(int i=0;v[i]<sqrt(n)+1;i++){
    if(n%v[i]==0){
        int c=0;
        while(n%v[i]==0){
            n/=v[i];
            c++;
        }
         sum*=(c+1);
    }
  }

  if(n>1){sum*=2;}

return sum;
}

int main()
{

   int t;
   cin>>t;

   while(t--){
    int n;
    cin>>n;
    sieve(n);
    if(divisor(n)==3) cout<<"YES\n";
    else cout<<"NO\n";
   }
}
