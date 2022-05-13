#include<bits/stdc++.h>
#define ll   long long
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define mod  1000000007
#define nn   "\n"
#define yes  cout<<"YES\n"
#define no   cout<<"NO\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string ss;
    cin>>ss;
    int c=0;
    for(int i=1;i<n;i+=2)
    {
        if(ss[i]!=ss[i-1])c++;
    }
    cout<<c<<nn;
    }
    return 0;
}

