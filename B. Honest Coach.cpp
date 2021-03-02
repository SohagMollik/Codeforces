#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int ok;
        for(int i=0;i<n-1;i++)
        {
           ok=(a[i+1]-a[i]);
           v.push_back(ok);
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
        v.clear();
    }
}
