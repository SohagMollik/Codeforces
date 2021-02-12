#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem;
    cin>>n;
    if(n<=5)cout<<1<<endl;
    else{
            if(n%5==0)
              rem=n/5;
            else
              rem=(n/5)+1;
        cout<<rem<<endl;

    }
}
