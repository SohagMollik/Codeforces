#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float n;
    cin>>n;
    int a=(int)n;
    float f=n-a;
    if(f==0.00)
        cout<<"int "<<n<<endl;
    else
        cout<<"float "<<a<<" "<<f<<endl;
}
