#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int x=a[i];
        s.insert(x);
    }
    int zero=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)zero++;
    }
    if(s.size()<n&&zero==0)cout<<n<<"\n";
    else if(zero>=1&&s.size()<=n)cout<<n-zero<<"\n";
    else cout<<n+1<<"\n";
}
    return 0;
}

