#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int sum;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            sum=a[i]+a[j]+j-i;
            v.push_back(sum);
        }
    }
    sort(v.begin(),v.end());
        cout<<v[0]<<endl;

}
}
