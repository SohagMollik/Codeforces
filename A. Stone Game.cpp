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
vector<int>vec;
int ok[105],a[105];
int main()
{
  fast;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ok[i]=a[i];
    }
    sort(a,a+n);
    int mn=a[0];
    int mx=a[n-1];
    //cout<<mn<<" "<<mx<<endl;

    int k=0,lmn=1;
   while(mn!=ok[k])
   {
       lmn++;
       k++;
   }

   int z=n-1;
   int rmx=1;
   while(mx!=ok[z]){
    rmx++;
    z--;
   }
   int ans1=lmn+rmx;

   vec.pb(ans1);

   int x=0;
   int lmx=1;
   while(mx!=ok[x])
   {
       lmx++;
       x++;
   }
   int y=n-1;
   int rmn=1;
   while(mn!=ok[y]){
    rmn++;
    y--;
   }
   int ans2=lmx+rmn;
   vec.pb(ans2);

   int b=0;
   int leftmin=1;
   while(mn!=ok[b]){
    leftmin++;
    b++;
   }
   int c=0;
   int  leftmax=1;
   while(mx!=ok[c]){
    leftmax++;
    c++;
   }
   int ans3=max(leftmin,leftmax);
   vec.pb(ans3);

   int d=n-1;
   int  rightmin=1;
   while(mn!=ok[d]){
    rightmin++;
    d--;
   }
   int e=n-1;
   int rightmax=1;
   while(mx!=ok[e]){
    rightmax++;
    e--;
   }
   int ans4=max(rightmin,rightmax);
   vec.pb(ans4);

 sort(vec.begin(),vec.end());
cout<<vec[0]<<endl;

 vec.clear();
  }
    return 0;
}
