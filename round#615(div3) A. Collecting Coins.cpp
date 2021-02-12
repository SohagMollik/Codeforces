#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int b[4],n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>b[0]>>b[1]>>b[2]>>n;
        sort(b,b+3);
        int p=b[2]-b[0]+b[2]-b[1];
        if(n<p){
            cout<<"NO"<<endl;
            continue;
        }
        if((n+b[0]+b[1]+b[2])%3==0)
            cout<<"YES"<<endl;

        else

        cout<<"NO"<<endl;

    }
}
