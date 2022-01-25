#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,s=1;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=4000;i++){
        for(int j=0;j<=4000;j++){
            int k=n-a*i-b*j;
            if(k>=0&&k%c==0){
            s=max(s,i+j+k/c);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
