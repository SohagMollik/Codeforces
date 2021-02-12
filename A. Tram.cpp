#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,s=0,c=0;
    while(n--){
        cin>>a>>b;
        s+=b-a;
        if(s>c)
            c=s;
    }
    cout<<c<<endl;
}
