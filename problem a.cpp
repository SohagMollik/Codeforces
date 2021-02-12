#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    if (n==0) cout<<1<<endl;
    else{
    while(n!=0){
        int r=n%10;
        n/=10;
        c++;
    }
    cout<<c<<endl;
}
}
