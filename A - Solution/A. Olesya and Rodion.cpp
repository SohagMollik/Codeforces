#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int n,t;
 cin>>n>>t;
 if(n==1&&t>=10)cout<<-1<<endl;
 else cout<<t%10+t/10;
 for(int i=1;i<n;i++)cout<<0;
 return 0;
}
