#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,val;
    cin>>a>>b;
    val=(a/b)+((a%b)!=0);
   double s=(double)a/b;
    cout<<"floor "<<a<<" "<<"/"<<" "<<b<<" "<<"="<<" "<<floor(a/b)<<endl;
    cout<<"ceil "<<a<<" "<<"/"<<" "<<b<<" "<<"="<<" "<<val<<endl;
    cout<<"round "<<a<<" "<<"/"<<" "<<b<<" "<<"="<<" "<<round(s)<<endl;


}
