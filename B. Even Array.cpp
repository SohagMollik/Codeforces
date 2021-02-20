#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int c=0,d=0,y;
    for(int x=0;x<n;x++){
        cin>>y;
        if(y%2!=x%2){
            if(x%2==0){
                c++;
            }
            else{
                d++;
            }
        }
    }
    if(c!=d)cout<<-1<<endl;
    else cout<<c<<endl;
   }
}
