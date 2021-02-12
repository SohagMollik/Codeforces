#include<bits/stdc++.h>
using namespace std;
const int MAX=-10e9;
#define pb push_back
int main (){
 int t;
 cin>>t;
 while(t--){
    int a[105];
     int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++){
            int Max=MAX;
        for(int j=i;j<n;j++){
                Max=max(a[j],Max);
                v.pb(Max);
        }
    }
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    }
    cout<<endl;
}
