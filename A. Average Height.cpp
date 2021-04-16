#include<bits/stdc++.h>
using namespace std;
vector<int>x,y;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]%2!=0)x.push_back(a[i]);
            else y.push_back(a[i]);
        }
        for(int i=0;i<x.size();i++)cout<<x[i]<<" ";
        for(int i=0;i<y.size();i++)cout<<y[i]<<" ";
        cout<<endl;
        x.clear();
        y.clear();
    }
    return 0;
}
