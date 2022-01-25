#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==k)cout<<1<<endl;
        else if(n>k)cout<<2-(n%k==0)<<endl;
        else if(n<k)cout<<(n+k-1)/n<<endl;
    }
}
