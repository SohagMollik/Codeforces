#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int n,k;
     cin>>n>>k;
     int s=240-k;
     int sum=0;
     for(int i=1;i<=n;i++){
        sum+=(i*5);
     }
     if(s>=sum)cout<<n<<endl;
     else{
            int c=0;
        for(int i=1;i<=n;i++){
        int t=s-(i*5);
        if(t>=0){
         c++;
        }
        s-=(i*5);
        }
        cout<<c<<endl;
     }
 }

