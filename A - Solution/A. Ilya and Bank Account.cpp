#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0)cout<<n<<endl;
    else{

        int x=n/10;
        int y=n/100;
        int ok=n%10;
        int z=(y*10)+ok;
       cout<<max(n,max(x,z))<<endl;
    }
}
